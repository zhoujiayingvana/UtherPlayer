#ifndef __gif_h__
#define __gif_h__

#include <stdio.h>   
#include <string.h>  
#include <stdint.h>  


#ifndef GIF_TEMP_MALLOC
#include <stdlib.h>
#define GIF_TEMP_MALLOC malloc
#endif

#ifndef GIF_TEMP_FREE
#include <stdlib.h>
#define GIF_TEMP_FREE free
#endif

#ifndef GIF_MALLOC
#include <stdlib.h>
#define GIF_MALLOC malloc
#endif

#ifndef GIF_FREE
#include <stdlib.h>
#define GIF_FREE free
#endif


class Gif_H
{
public:
    explicit Gif_H();
    ~Gif_H();

const int kGifTransIndex = 0;

//内部结构体
struct GifPalette
{
    int bitDepth;

    uint8_t r[256];
    uint8_t g[256];
    uint8_t b[256];

    // k-d树在RGB空间上，以堆方式组织
    //即节点i的左子节点为节点i*2，右子节点为节点i*2+1
    //节点256-511是隐式的叶子，包含一种颜色
    uint8_t treeSplitElt[255];
    uint8_t treeSplit[255];
};

int GifIMax(int l, int r);
int GifIMin(int l, int r);
int GifIAbs(int i);


void GifGetClosestPaletteColor(GifPalette* pPal, int r, int g, int b,
                               int& bestInd, int& bestDiff, int treeRoot = 1);

void GifSwapPixels(uint8_t* image, int pixA, int pixB);

int GifPartition(uint8_t* image, const int left, const int right, const int elt, int pivotIndex);

void GifPartitionByMedian(uint8_t* image, int left, int right, int com, int neededCenter);

void GifSplitPalette(uint8_t* image, int numPixels, int firstElt, int lastElt,
                     int splitElt, int splitDist, int treeNode, bool buildForDither, GifPalette* pal);

int GifPickChangedPixels( const uint8_t* lastFrame, uint8_t* frame, int numPixels );

void GifMakePalette( const uint8_t* lastFrame, const uint8_t* nextFrame, uint32_t width, 
                     uint32_t height, int bitDepth, bool buildForDither, GifPalette* pPal );

void GifDitherImage( const uint8_t* lastFrame, const uint8_t* nextFrame, uint8_t* outFrame,
                     uint32_t width, uint32_t height, GifPalette* pPal );

void GifThresholdImage( const uint8_t* lastFrame, const uint8_t* nextFrame, uint8_t* outFrame,
                        uint32_t width, uint32_t height, GifPalette* pPal );

struct GifBitStatus
{
    uint8_t bitIndex;  
    uint8_t byte;      

    uint32_t chunkIndex;
    uint8_t chunk[256];   
};

void GifWriteBit( GifBitStatus& stat, uint32_t bit );


void GifWriteChunk( FILE* f, GifBitStatus& stat );

void GifWriteCode( FILE* f, GifBitStatus& stat, uint32_t code, uint32_t length );

struct GifLzwNode
{
    uint16_t m_next[256];
};

void GifWritePalette( const GifPalette* pPal, FILE* f );


void GifWriteLzwImage(FILE* f, uint8_t* image, uint32_t left, uint32_t top,
                      uint32_t width, uint32_t height, uint32_t delay, GifPalette* pPal);


struct GifWriter
{
    FILE* f;
    uint8_t* oldImage;
    bool firstFrame;
};


bool GifBegin( GifWriter* writer, const char* filename, uint32_t width,
               uint32_t height, uint32_t delay, int32_t bitDepth = 8, bool dither = false );


bool GifWriteFrame( GifWriter* writer, const uint8_t* image, uint32_t width,
                    uint32_t height, uint32_t delay, int bitDepth = 8, bool dither = false );


bool GifEnd( GifWriter* writer );

};

#endif
