#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - tests if character is digit
 * Return: the output
 */
void fizz_buzz(void)
{
	int n;
	int fizz;
	int buzz;

	n = 1;

	while (n <= 100)
	{
		fizz = n % 3;
		buzz = n % 5;
		if (fizz == 0 && buzz == 0)
		{
			printf("FizzBuzz ");
		}
		else if (buzz == 0)
		{
			printf("Buzz ");
		}
		else if (fizz == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
		n = n + 1;
	}
}

int main(void)
{
    fizz_buzz();
    return (0);
}
