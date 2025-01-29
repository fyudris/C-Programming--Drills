// 2. Get the C version in use

// Write a C program to get the C version you are using.
// Expected Output:

// We are using C18!

#include <stdio.h>

int	main(void)
{
	// Checks if the C standard version is greater than or equal to C18 (2017)
	#if __STDC_VERSION__ >= 201710L
	printf("We are using C18!\n");
	// Checks if the C standard version is greater than or equal to C11 (2011)
	#elif __STDC_VERSION__ >= 201112L
	printf("We are using C11!\n");
	// Checks if the C standard version is greater than or equal to C99 (1999)
	#elif __STDC_VERSION__ >= 199901L
		printf("We are using C99!\n");
	#else
	printf("We are using C89/C90!\n");
	#endif
	return (0);
}