#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer
 * @str: the string
 * Return: the pointer
 */
char *_strdup(char *str)
{
	int length;
	char *duplicate;
	int i;

	length = 0;
	duplicate = (char *)malloc(length * sizeof(char));

	while (str[length] != '\0')
	{
		length++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
