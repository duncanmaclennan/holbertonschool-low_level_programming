#include "main.h"
/**
 * puts_half - tests if character is digit
 * @str: the first integer
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;
	int end;

	while (str[length] != '\0')
	{
		length++;
	}

	start = ((length - 1) / 2) + 1;
	end = length - 1;

	for (i = start; i <= end; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
