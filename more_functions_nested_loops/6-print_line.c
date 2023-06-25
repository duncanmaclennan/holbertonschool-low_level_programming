#include "main.h"
/**
 * print_line - prints single integers
 * @n: line length
 * Return: 1 if true, 0 if false
 */
void print_line(int n)
{
	int k;

	k = 0;
	while (k <= n)
	{
		_putchar('_');
		k = k + 1;
	}
	_putchar('\n');
}
