#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c - the character passed to function
 * returns - 1 if alphabetic, 0 if not
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);	      }
else
{
return (0);
}
}
