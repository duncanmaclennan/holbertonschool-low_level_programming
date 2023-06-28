#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - tests if character is digit
 * @str: the first integer
 * Return: the conversion
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		capitalize_next = 0;
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		    *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' ||
		    *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
		    *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		ptr++;
	}
	return (str);
}
