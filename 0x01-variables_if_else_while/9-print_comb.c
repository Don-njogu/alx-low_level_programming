#include <stdio.h>
int main() {
    int i, j, k, l;

    for (i = 0; i <= 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            for (k = j + 1; k <= 9; k++) {
                for (l = k + 1; l <= 9; l++) {
                    putchar('0' + i);
                    putchar(',');
                    putchar(' ');
                    putchar('0' + j);
                    putchar(',');
                    putchar(' ');
                    putchar('0' + k);
                    putchar(',');
                    putchar(' ');
                    putchar('0' + l);
                    putchar('\n');
                }
            }
        }
    }

    return 0;
}

