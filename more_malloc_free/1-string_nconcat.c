#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - returns a pointer
 * @s1: the string
 * @s2: the string
 * @n: the string
 * Return: the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
unsigned int len1;
unsigned int len2;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
concatenated = malloc((len1 + n + 1) * sizeof(char));
if (concatenated == NULL)
exit(1);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (j = 0; j < n; j++, i++)
concatenated[i] = s2[j];
concatenated[i] = '\0';
return (concatenated);
}
