#include "main.h"
/**
 * print_last_digit - This is a description
 * @n:  this is the integer passed
 * Return: returns the result
 */

int print_last_digit(int n)
{
	int last = n % 10;

	_putchar('0' + last);
	return (last);
}
