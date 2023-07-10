#include <stdlib.h>
#include "main.h"
/**
 * str_concat - returns a pointer
 * @s1: the string
 * @s2: the string
 * Return: the pointer
 */

char *str_concat(char *s1, char *s2) {

	int len1;
	int len2;
	int i;
	int j;
	char *concatenated;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concatenated[len1 + j] = s2[j];
	}
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}
