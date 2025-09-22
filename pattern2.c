#include <stdio.h>

int main() {
    int n = 5;   // number of rows
    int i, j, num;

    for (i = 0; i < n; i++) {
        num = 1;

        // Print leading spaces (for better formatting)
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Print numbers in each row
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  // formula for next binomial coefficient
        }

        printf("\n");
    }

    return 0;
}
