#include "vectorlib.h"

/* function to take dot product of two vectors */
float dotProductVectors(Vector a, Vector b){
    float sum=0;
    for(int i=0;i<DIMENSION;i++){
        sum+=a.values[i]*b.values[i];
    }
    return sum;
}