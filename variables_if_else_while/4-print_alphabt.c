#include <stdio.h>
/**
 * main - This is a description
 * Return: This is the return action
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return 0;
}
