#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: location of the string in memory
 * Return: the conversion
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
