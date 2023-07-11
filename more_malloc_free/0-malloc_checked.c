#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - returns a pointer
 * @b: the string
 * Return: the pointer
 */


void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
	exit(98);
}
return (ptr);
}
