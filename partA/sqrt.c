/* This program computes the square root of a
positive number. */

/* this is a comment by Dipanshu */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	/* checking the number is not positive */
	if(input<0){
		printf("Sqrt of %d is %fi\n",input,sqrt(-1*input));
	}
	/* else if the number is okay */
	else{
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	}

	printf("End of program. Exiting.\n");

	return(0);

} // end main
