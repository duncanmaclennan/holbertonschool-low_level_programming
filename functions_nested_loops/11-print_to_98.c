#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - This is a description
 * @n:  this is the integer passed
 * Return: returns the result
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				n = n + 1;
			}
			else
			{
				printf("%d", n);
				n = n + 1;
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
