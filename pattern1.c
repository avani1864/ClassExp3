#include <stdio.h>

int main() 
{
    int i, j, num = 1;

    // Loop for rows
    for (i = 1; i <= 3; i++) 
    {
        // Loop for columns in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
