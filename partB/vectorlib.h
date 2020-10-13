/* header file containg the various functionalities */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Some definitions for easy access */
/* dimension of the vector */
#define DIMENSION 4

/* defining a structure to our vector */
typedef struct Vector{
    float values[DIMENSION];
} Vector;

/* function to add two vectors */
Vector addVectors(Vector a, Vector b);

/* function to subtract two vectors */
Vector subtractVectors(Vector a, Vector b);

/* function to element wise mutiply two vectors */
Vector elementProductVectors(Vector a, Vector b);

/* function to take dot product of two vectors */
float dotProductVectors(Vector a, Vector b);

/* function to tell the modulus of a vector */
float modulusVectors(Vector a);

/* function to determine angle between two vectors in radians */
float angleBetweenVectors(Vector a, Vector b);