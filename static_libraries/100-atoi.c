#include <stdio.h>
/**
 * _atoi - tests if character is digit
 * @s: the first integer
 * Return: the conversion
 */
int _atoi(char *s)
{
	int result = 0, sign = 1, digit, found_number = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * (-1);
		else if (*s == '+' || (*s >= '0' && *s <= '9'))
		{
			if (*s == '+')
				sign = sign * 1;
			else
			{
				found_number = 1;
				digit = *s - '0';
				result = result * 10 + (sign * digit);
			}
		}
		else if (found_number)
			break;
		s = s + 1;
	}
	return (result);
}
