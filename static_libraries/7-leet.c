#include <stdio.h>
/**
 * leet - tests if character is digit
 * @str: the first integer
 * Return: the conversion
 */
char *leet(char *str)
{
	int i;
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	while (*ptr != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
