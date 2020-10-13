#include "vectorlib.h"

/* function to tell the modulus of a vector */
float modulusVectors(Vector a){
    float sum=0;
    for(int i=0;i<DIMENSION;i++){
        sum+=a.values[i]*a.values[i];
    }
    return sqrt(sum);
}