#include "main.h"
/**
 * print_square - tests if character is digit
 * @size: size of square
 * Return: the output
 */

void print_square(int size)
{
	int x;
	int y;

	y = 0;
	if (size > 0)
	{
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x = x + 1;
		}
		_putchar('\n');
		y = y + 1;
	}
	}
	else
	{
	_putchar('\n');
	}
}
