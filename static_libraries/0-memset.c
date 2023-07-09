#include <stdio.h>
/**
 * _memset - tests if character is digit
 * @s: the first integer
 * @b: the char
 * @n: the integer
 * Return: the conversion
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
