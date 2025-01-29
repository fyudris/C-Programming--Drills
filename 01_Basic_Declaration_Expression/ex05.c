// 5. Compute rectangle perimeter and area

// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

#include <stdio.h>

int	main(void)
{
	int	height = 7;
	int	width = 5;

	printf("Perimeter of the rectangle = %i inches\n", 2*height + 2*width);
	printf("Area of the rectangle = %i square inches\n", height * width);

	return (0);
}