#include "main.h"
/**
 * _strcat - concats two strings
 * @dest: the first string
 * @src: the second string
 * Return: the conversion
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr = ptr + 1;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr = ptr + 1;
		src = src + 1;
	}
	*ptr = '\0';
	return (dest);
}
