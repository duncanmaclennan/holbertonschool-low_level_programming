#include <stdio.h>
#include "main.h"
/**
 * _strstr - tests if character is digit
 * @haystack: the first integer
 * @needle: the bytes
 * Return: the conversion
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr;
	char *needle_ptr;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		haystack_ptr = haystack;
		needle_ptr = needle;
		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
