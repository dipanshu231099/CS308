/* partB code for Vector operations */
#include "vectorlib.h"

/* function to input a vector */
void inputVector(Vector* vector){
    printf("Input vector (4 space seperated real numbers): ");
    for(int i=0;i<DIMENSION;i++){
        scanf("%f", &vector->values[i]);
    }
}

/* function to print a vector */
void printVector(Vector* vector){
    printf("Vector: [");
    for(int i=0;i<DIMENSION;i++){
        printf("%f ",vector->values[i]);
    }
    printf("]\n");
}

/* Main driver function */
int main() {
    Vector vector1, vector2;
    inputVector(&vector1);
    inputVector(&vector2);

    // computing the norms
    float norm_mod_vec1 = modulusVectors(vector1);
    float norm_mod_vec2 = modulusVectors(vector2);
    printf("Modulus/norm of vector1: %f\nModulus/norm of vector2: %f\n",norm_mod_vec1,norm_mod_vec2);
    
    // computing the sum of the above two vectors
    Vector sumVector = addVectors(vector1, vector2);
    printf("Sum of vectors: ");
    printVector(&sumVector);

    // computing the difference
    Vector diffVector = subtractVectors(vector1, vector2);
    printf("Difference of vectors: ");
    printVector(&diffVector);

    // computing element wise product
    Vector elementWiseProdVector = elementProductVectors(vector1, vector2);
    printf("Element wise product of vectors: ");
    printVector(&elementWiseProdVector);

    // computing dot product
    float dotProd = dotProductVectors(vector1, vector2);
    printf("Dot product of vectors: %f\n",dotProd);

    // computing angle between vectors in rad.
    float angleGap = angleBetweenVectors(vector1, vector2);
    printf("Angle between vectors in radians: %f\n", angleGap);

    return 0;
}