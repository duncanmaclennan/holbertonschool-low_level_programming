#include "main.h"
/**
 * _puts - tests if character is digit
 * @str: the first integer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
