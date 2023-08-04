#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - sets value of bit at index
 * @n: pointer to the binary
 * @m: the index
 * Return: the count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
