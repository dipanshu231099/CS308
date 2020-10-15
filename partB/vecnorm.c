#include "vectorlib.h"

/* function to tell the modulus of a vector */
float modulusVectors(Vector a){
    float norm=0;

    for(int i=0;i<DIMENSION;i++){
        norm+=a.values[i]*a.values[i]; /* adding the square of absolute value*/
    }
    return sqrt(norm); /*return the square root of norm*/
}