#include <stdio.h>
#include "main.h"
/**
 * factorial - prints a string
 * @n: location of the string in memory
 * Return: the conversion
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
