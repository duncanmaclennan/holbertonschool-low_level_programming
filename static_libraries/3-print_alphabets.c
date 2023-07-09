#include <stdio.h>
/**
 * main - This is a description
 * Return: This is the return action
 */
int main(void)
{
char ch = 'a';
char up = 'A';
while (ch <= 'z')
{
putchar(ch);
ch = ch + 1;
}
while (up <= 'Z')
{
putchar(up);
up = up + 1;
}
putchar('\n');
return (0);
}
