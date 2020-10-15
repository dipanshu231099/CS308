#include "vectorlib.h"

/* 
    returns the dot product of two vectors
*/
float dotProductVectors(Vector a, Vector b){
    float dotProd = 0;
    
    for(int i=0;i<DIMENSION;i++)
    {
        dotProd += a.values[i]*b.values[i];
    }
    return dotProd;
}