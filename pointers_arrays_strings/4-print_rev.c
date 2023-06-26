#include "main.h"
/**
 * print_rev - tests if character is digit
 * @s: the first integer
 */
void print_rev(char *s)
{
	char *end = s;
	
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
