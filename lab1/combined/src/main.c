#include <stdio.h>
#include <stdlib.h>
#include "rect.h"
#include "circle.h"
#include "triangle.h"

int main (int argc, char **argv)
{
	double x;		// The width of the rectangle
	double y;		// The height of the rectangle
	double area;	// The area of the rectangle
	char *shape;	// The shape the area is being calculated for

	// The first argument is the shape the area is being calculated for
	shape = argv[1];

	// The second argument is the first number parameter
	x = atof(argv[2]);

	// If the shape is a rectangle or a triangle there will be a second number parameter
	if (strcmp(shape,"rectangle") || strcmp(shape,"triangle"))
	{
		y = atof(argv[3]);
	}

	// Perform the calculation
	if (strcmp(shape,"circle"))
	{
		area = circleArea(x);
	} else if (strcmp(shape,"rectangle"))
	{
		area = rectangleArea(x,y);
	} else if (strcmp(shape,"triangle"))
	{
		area = triangleArea(x,y);
	}

	// Print out the result
	printf("%f\n",area);

	return 0;
}