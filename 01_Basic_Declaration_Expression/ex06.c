// 6. Compute circle perimeter and area

// Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches

#include <stdio.h>
#define PI 3.14

int	main(void)
{
	int	radius = 6;
	float	area, perimeter = 0;

	perimeter = 2 * PI * radius;
	area = PI * radius * radius;

	printf("Perimeter of the Circle = %f inches\n", perimeter);
	printf("Area of the Circle = %f square inches\n", area);

	return (0);
}