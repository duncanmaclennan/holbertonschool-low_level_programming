#include <stdio.h>
/**
 * _strchr - tests if character is digit
 * @s: the first integer
 * @c: the char
 * Return: the conversion
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
