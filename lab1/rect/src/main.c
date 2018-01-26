#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
	double x;	// The width of the rectangle
	double y;	// The height of the rectangle
	double area;	// The area of the rectangle

	// The first and second arguments are the width and length of the rectangle
	x = atof(argv[1]);
	y = atof(argv[2]);

	// Perform the calculation
	area = x * y;

	// Print out the result
	printf("%f/n",area);

	return 0;
}
