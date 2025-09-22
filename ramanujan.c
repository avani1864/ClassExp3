#include <stdio.h>

int main() 
{
    int L, a, b, c, d;
    int num;

    printf("Enter the limit (L): ");
    scanf("%d", &L);

    printf("\nRamanujan numbers up to limit %d:\n", L);

    // Check all combinations
    for (a = 1; a <= L; a++) 
    {
        for (b = a; b <= L; b++) 
        {
            for (c = a + 1; c <= L; c++) 
            {
                for (d = c; d <= L; d++) 
                {
                    // Calculate sum of cubes
                    if (a * a * a + b * b * b == c * c * c + d * d * d) 
                    {
                        num = a * a * a + b * b * b;
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", num, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
