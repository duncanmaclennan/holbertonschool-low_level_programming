#include "main.h"
/**
 * print_numbers - prints single integers
 * Return: 1 if true, 0 if false
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar('0' + n);
		n = n + 1;
	}
	_putchar('\n');
}
