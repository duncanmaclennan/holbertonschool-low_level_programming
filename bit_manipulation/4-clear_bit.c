#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets value of bit at index
 * @n: pointer to the binary
 * @index: the index
 * Return: -1 if fail, 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
