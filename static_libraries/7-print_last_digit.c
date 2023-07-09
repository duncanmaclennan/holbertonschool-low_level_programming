#include "main.h"
/**
 * print_last_digit - This is a description
 * @n:  this is the integer passed
 * Return: returns the result
 */

int print_last_digit(int n)
{
	int last;
	int num = n % 10;

	if (num < 0)
	{
		last = -num;
	}
	else
	{
		last = num;
	}

	_putchar('0' + last);
	return (last);
}
