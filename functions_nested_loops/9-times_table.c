#include "main.h"
/**
 * times_table - This is a description
 * Return: returns the result
 */

void times_table(void)
{
	int i;
	int j;
	int x;
	int y;
	int z;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			x = i * j;
			y = x / 10;
			z = x % 10;
			if (y > 0)
			{
				_putchar('0' + y);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + z);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j = j + 1;
		}
	_putchar('\n');
	i = i + 1;
	}
}
