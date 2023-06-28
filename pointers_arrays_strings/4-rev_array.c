#include <stdio.h>
/**
 * reverse_array - tests if character is digit
 * @a: the first integer
 * @n: the elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
