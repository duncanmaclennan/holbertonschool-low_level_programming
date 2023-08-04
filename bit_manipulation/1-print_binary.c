#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - converts a binary to int
 * @n: the binary
 */

void print_binary(unsigned long int n)
{
	int found;
	unsigned long int mask;

	found = 0;
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
		printf("0");

	while (mask)
	{
		if (n & mask)
		{
			printf("1");
			found = 1;
		}
		else if (found)
		{
			printf("0");
		}

		mask >>= 1;
	}
}
