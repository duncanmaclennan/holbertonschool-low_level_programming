#include <stdlib.h>
#include <time.h>
/**
 * main - This is a description
 * return - This is the return action
 */

int main(void)
{
        int n;
        int printf(const char *format, ...);
        int lastDigit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        lastDigit = (abs(n) % 10);
        printf("Last digit of %d is ", n);

        if (lastDigit > 5) {
                printf("%d and is greater than 5", lastDigit);
        }


        printf("\n");

        return (0);
}
