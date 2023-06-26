#include "main.h"
/**
 * puts2 - tests if character is digit
 * @str: the first integer
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index = index + 2;
	}
	_putchar('\n');
}
