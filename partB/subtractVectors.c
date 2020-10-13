#include "vectorlib.h"

/* function to subtract two vectors */
Vector subtractVectors(Vector a, Vector b){
    Vector c;
    for(int i=0;i<DIMENSION;i++){
        c.values[i]=a.values[i]-b.values[i];
    }
    return c;
}