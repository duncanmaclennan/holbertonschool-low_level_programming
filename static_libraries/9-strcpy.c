#include "main.h"
/**
 * _strcpy - tests if character is digit
 * @dest: the first integer
 * @src: the source string
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
