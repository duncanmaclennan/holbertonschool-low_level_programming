#include <stdio.h>
/**
 * main - This is a description
 * Return: This is the return action
 */
int main(void)
{
int num = 0;
int letter = 'a';
while (num < 10)
{
putchar(num);
num = num + 1;
}

while (letter <= 'f')
{
putchar(letter);
letter = letter + 1;
}

putchar('\n');

return (0);
}
