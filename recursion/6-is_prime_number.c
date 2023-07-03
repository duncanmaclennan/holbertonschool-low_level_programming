#include <stdio.h>
#include "main.h"
/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);

}
/**
 * is_prime_number - checks the input number is prime
 * @n: number is squared and compared against base
 * Return: natural square root of number base
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
