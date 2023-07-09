#include <stdio.h>
#include "main.h"
/**
 * _strspn - tests if character is digit
 * @s: the first integer
 * @accept: the bytes
 * Return: the conversion
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *ptr;

	count = 0;

	while (*s != '\0' && *s != ' ' && *s != '\t' && *s != '\n')
	{
		ptr = accept;
		while (*ptr != '\0')
		{
			if (*ptr == *s)
			{
				count++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
