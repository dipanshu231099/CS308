/* partB code for Vector operations */
#include "vectorlib.h"

/* function to input a vector */
void inputVector(Vector* vector){
    printf("Vector input mode ------\n");
    for(int i=0;i<DIMENSION;i++){
        printf("Enter element %d: ",i+1);
        scanf("%f", &vector->values[i]);
    }
}

/* function to print a vector */
void printVector(Vector* vector){
    printf("Vector: ");
    for(int i=0;i<DIMENSION;i++){
        printf("%f ",vector->values[i]);
    }
    printf("\n");
}

/* Main driver function */
int main() {
    Vector vector1, vector2;
    inputVector(&vector1);
    inputVector(&vector2);
    Vector c = addVectors(vector1, vector2);
    printVector(&c);

    float norm_mod_vec1 = modulusVectors(vector1);
    float norm_mod_vec2 = modulusVectors(vector2);
    printf( "Modulus/norm of vector1: %f ,Modulus/norm of vector2: %f",norm_mod_vec1,norm_mod_vec2);

    return 0;
}