// Reverse characters ('X', 'M', 'L')

// Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

#include <stdio.h>

int	main(void)
{
	char	c1 = 'X';
	char	c2 = 'M';
	char	c3 = 'L';

	printf("The reverse of %c%c%c is %c%c%c\n", c1, c2 , c3, c3, c2, c1);

	return(0);
}