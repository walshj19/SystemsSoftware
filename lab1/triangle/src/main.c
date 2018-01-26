#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
	double x;	// The length of the base of the triangle
	double y;	// The height of the triangle
	double area;	// The area of the triangle

	// The first and second arguments are the base and height of the triangle
	x = atof(argv[1]);
	y = atof(argv[2]);

	// Perform the calculation
	area = x * y * .5f;

	// Print out the result
	printf("%f\n",area);

	return 0;
}
