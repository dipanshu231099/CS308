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
    
    // computing the sum of the above two vectors
    Vector sumVector = addVectors(vector1, vector2);
    printVector(&sumVector);
    return 0;
}