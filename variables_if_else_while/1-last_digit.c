#include <stdlib.h>
#include <time.h>
/**
 * main - This is a description
 * return - This is the return action
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("Last digit of %d is ", n);

        if ((n%10)>5) {
            printf("and is greater than 5")
        }


        return (0);
}
