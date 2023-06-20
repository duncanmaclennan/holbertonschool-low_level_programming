#include "main.h"
/**
 * print_sign: This is a description
 * @n:  this is the integer passed
 * Return: returns 1 if true, 0 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
