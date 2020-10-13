#include "vectorlib.h"

/* function to determine angle between two vectors in radians */
float angleBetweenVectors(Vector a, Vector b){
    float dot = dotProductVectors(a,b);
    float modA = modulusVectors(a);
    float modB = modulusVectors(b);
    return dot/(modA*modB);
}