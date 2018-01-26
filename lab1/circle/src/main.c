#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char ** argv)
{
	double r;	// The radius of the circle
	double area;	// The area of the circle

	// The first argument is the radius of the circle
	r = atof(argv[1]);

	// Perform the calculation
	area = pow(r, 2) * M_PI;

	// Print out the result
	printf("%f\n",area);

	return 0;
}
