

// This is only sample code; it has not been complied

// A has to write these
//////////////////////////////////////////////////////////

/* veclib.h */


#define DIM 4
// vector type
typedef vector float[DIM];

// functions
// print vector
void print(vector vec_a);
// vector addition
vector add(vector vec_a, vector vec_b);
// elementwise product
vector eleProd(vector vec_a, vector vec_b);
// difference of two vectors
vector vector diff(vector vec_a, vector vec_b);
// dot product
float vector dotprod(vector vec_a, vector vec_b);
// add other functions as needed


//////////////////////////////////////////////////////////

void print(vector vec_a) {
	printf("[");
	for (i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
}
//////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
/* vecmain.c*/
// main program

#include "veclib.h"
int main() {
	vector vecA, vecB, vecC;
	// read vectors vecA, vecB as input

	printf("Printing vector sum\n");
	add(vecA,vecB,&vecC);
	
	// print and display other outputs
	// product, difference, dot product, angle

} // end main
//////////////////////////////////////////////////////////





// These have to be done by team members B, C, D, E
// Each function in a separate c file
//////////////////////////////////////////////////////////
/* vecadd.c */
// Each function in a separate file
vector add(vector vec_a, vector vec_b) {
	// write code here to add vec_a and vec_b and 
	// return the sum in vec_c
//////////////////////////////////////////////////////////


// add functions for others as specified in the header file


