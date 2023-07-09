#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * swap_int - tests if character is digit
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
