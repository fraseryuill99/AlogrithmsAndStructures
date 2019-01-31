#include <stdio.h>

'stating the main function for all parts of the code to be run in'
int main()
{
	'declaring all the variables for the program that are used'
	int variable1;
	double variable2;
	long variable3;
	char variable4[5];
	
	'a print statement that outputs to the command line'
	printf("Size of variable1 is %zu bytes, size of variable2 is %zu bytes, size of variable3 is %zu bytes, size of variable4 is %zu bytes\n", sizeof(variable1), sizeof(variable2), sizeof(variable3), sizeof(variable4));
	
	'standard ending to a c program so that the function knows when to end'
	return 0;
}