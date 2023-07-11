#include <stdlib.h>
#include "main.h"
/**
 * array_range - returns a pointer
 * @min: the string
 * @max: the string
 * Return: the pointer
 */

int *array_range(int min, int max)
{
int size;
int *array;
int i;
if (min > max)
return (NULL);
size = max - min + 1;
array = (int *)malloc(size *sizeof(int));
if (array == NULL)
{
exit(1);
}
for (i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
