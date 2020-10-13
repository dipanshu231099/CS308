#include "vectorlib.h"

/* function to element wise mutiply two vectors */
Vector elementProductVectors(Vector a, Vector b){
    Vector c;
    for(int i=0;i<DIMENSION;i++){
        c.values[i]=a.values[i]*b.values[i];
    }
    return c;
}