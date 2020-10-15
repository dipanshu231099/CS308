#include "vectorlib.h"

/* function to add two vectors */
Vector addVectors(Vector a, Vector b){
    Vector c;
    for(int i=0;i<DIMENSION;i++){
        c.values[i]=a.values[i]+b.values[i];
    }
    return c;
}