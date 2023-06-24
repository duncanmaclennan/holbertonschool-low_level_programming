#include "main.h"
/**
 * _isdigit - tests if character is digit
 * @c: the character
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
