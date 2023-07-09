#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - prints a string
 * @x: location of the string in memory
 * @y: the exponent
 * Return: the conversion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
