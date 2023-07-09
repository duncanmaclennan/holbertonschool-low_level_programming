#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - tests if character is digit
 * @a: the first integer
 * @size: the bytes
 * Return: the conversion
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
