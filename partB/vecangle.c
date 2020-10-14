#include "vectorlib.h"

/* function to determine angle between two vectors in radians */
float angleBetweenVectors(Vector a, Vector b){ // arguments - 2 vectors b/w which we have to find angle
	/* angle = a.b/(|a||b|) */
    float dotProduct = dotProductVectors(a,b);	// dot product between vec-a, vec-b
    float modA = modulusVectors(a);	// len or mod of vec-a
    float modB = modulusVectors(b);	// len or mod of vec-b
    return dotProduct/(modA*modB);	// applying formula mentioned above
}