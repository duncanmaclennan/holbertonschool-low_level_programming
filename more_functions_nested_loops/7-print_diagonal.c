#include "main.h"
/**
 * print_diagonal - prints single integers
 * @n: line length
 * Return: 1 if true, 0 if false
 */
void print_diagonal(int n)
{
	int k;
	int j;

	k = 0;
	while (k < n)
	{
		j = 0;
		while (j < k)
		{
			_putchar(' ');
			j = j + 1;
		}
		_putchar('\\');
		_putchar('\n');
		k = k + 1;
	}
	_putchar('\n');
}
