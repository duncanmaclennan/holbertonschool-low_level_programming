#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - tests if character is digit
 * @s: the first integer
 * @accept: the bytes
 * Return: the conversion
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;
		while (*ptr != '\0')
		{
			if (*ptr == *s)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
