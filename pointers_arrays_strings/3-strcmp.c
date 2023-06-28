#include <stdio.h>
/**
 * _strcmp - tests if character is digit
 * @s1: the first string
 * @s2: the second string
 * Return: the conversion
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
