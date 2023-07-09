#include "main.h"
/**
 * _strncpy - concats two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 * Return: the conversion
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
