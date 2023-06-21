#include "main.h"
/**
 * jack_bauer - This is a description
 * Return: returns the result
 */

void jack_bauer(void)
{
	int i;
	int a;
	int b;
	int j;
	int c;
	int d;

	i = 0;

	while (i <= 23)
	{
		a = i / 10;
		b = i % 10;

		j = 0;

		while (j <= 59)
		{
			c = j / 10;
			d = j % 10;
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
			j = (j + 1);
		}
		j = 0;
		i = (i + 1);
	}
}
