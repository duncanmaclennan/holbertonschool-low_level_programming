#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is a description
 * return - This is the return action
 */

int main(void)
{
        int n;
        int lastDigit = abs(n) % 10;
	n = 0
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	if (lastDigit > 5) {
		printf("%d and is greater than 5", lastDigit);
	} else if (lastDigit == 0) {
		printf("%d and is 0", lastDigit);
	} else {
		printf("%d and is less than 6 and not 0", lastDigit);
	}

	printf("\n");

	return 0;
}
