#include <stdio.h>
/**
 * main - This is a description
 * Return: This is the return action
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar('0' + num);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num = num + 1;
}

putchar('\n');

return (0);
}
