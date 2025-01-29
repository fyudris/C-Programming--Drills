// 3. Print block 'F' and a large 'C'

// Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.

#include <stdio.h>

void	print_hash_f(void)
{
	printf("######\n");
	printf("#\n#\n");
	printf("#####\n");
	printf("#\n#\n#\n");
}

void	print_hash_c(void)
{
	printf("    ######\n");
	printf("  ##      ##\n");
	printf("#\n#\n#\n#\n#\n");
	printf("  ##      ##\n");
	printf("    ######\n");
}

int	main(void)
{
	print_hash_f();
	print_hash_c();
	return (0);
}