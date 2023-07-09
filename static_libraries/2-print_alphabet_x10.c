#include "main.h"
/**
 * print_alphabet_x10 - This is a description
 * Return: This is the return action
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 26)
		{
			_putchar('a' + i);
			i = (i + 1);
		}
		_putchar('\n');
		j = (j + 1);
	}
}
