#include <stdio.h>
/**
 * main - This is a description
 * Return: This is the return action
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
ch=ch+1;
}
putchar('\n');
return (0);
}
