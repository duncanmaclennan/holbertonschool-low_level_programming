#include <stdio.h>
/**
 * main - This is a description
 * Return: This is the return action
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch = ch - 1;
}
putchar('\n');
return (0);
}
