#include "main.h"
/**
 * more_numbers - prints single integers
 * Return: the result
 */
void more_numbers(void)
{
	int i, j, k, n;

	i = 0;
	n = 0;
	while (n < 10)
	{
	while (i < 15)
	{
		j = i % 10;
		k = i / 10;
		if (k > 0)
		{
			_putchar('0' + k);
		}
		_putchar('0' + j);
		i = i + 1;
	}
	_putchar('\n');
	n = n + 1;
	i = 0;
	}
}
