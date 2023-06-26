#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - tests if character is digit
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
