#include "main.h"
/**
 * print_alphabet - This is a description
 * Return: This is the return action
 */
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		i = (i + 1);
	}
	_putchar('\n');

}
