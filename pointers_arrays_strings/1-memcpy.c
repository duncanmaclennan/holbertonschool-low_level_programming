#include <stdio.h>
/**
 * _memcpy - tests if character is digit
 * @dest: the first integer
 * @src: the source
 * @n: the int
 * Return: the conversion
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
