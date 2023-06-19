#include <stdio.h>

int main(void) {
    int num = 0;
    while (num < 10) {
        int num2 = 0;
        while (num2 < 10) {
            putchar('0' + num);
            putchar('0' + num2++);
            if (num2 != 10) {
                putchar(',');
                putchar(' ');
            }
        }
        num++;
    }

    putchar('\n');

    return 0;
}
