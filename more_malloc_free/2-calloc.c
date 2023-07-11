#include <stdlib.h>
#include "main.h"
/**
 * _calloc - returns a pointer
 * @nmemb: the string
 * @size: the string
 * Return: the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int totalSize;
unsigned char *bytePtr;
unsigned int i;
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
exit(1);
}
totalSize = nmemb * size;
bytePtr = (unsigned char *)ptr;
for (i = 0; i < totalSize; i++)
{
bytePtr[i] = 0;
}
return (ptr);
}
