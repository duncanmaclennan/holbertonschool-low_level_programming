#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints a string
 * @s: location of the string in memory
 * Return: the conversion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
