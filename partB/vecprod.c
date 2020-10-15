#include "vectorlib.h"

/* Function to element wise mutiply two vectors */
// Developer - Ayushman Dixit
Vector elementProductVectors(Vector a, Vector b){
    Vector finalVec;
    //Multipication
    for(int i=0;i<DIMENSION;i++){
        finalVec.values[i]=a.values[i]*b.values[i];
    }
    return finalVec;
}