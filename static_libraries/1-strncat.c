#include "main.h"
/**
 * _strncat - concats two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 * Return: the conversion
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr = ptr + 1;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr = ptr + 1;
		src = src + 1;
		n = n - 1;
	}
	*ptr = '\0';
	return (dest);
}
