#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: location of the string in memory
 * Return: the conversion
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
