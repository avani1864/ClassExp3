#include <stdio.h>

int main() 
{
    int num, choice;
    int positive = 0, negative = 0, zero = 0;

    do 
    {
        // Input a number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count positive, negative or zero
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        // Ask if user wants to continue
        printf("Do you want to enter another number? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    // Display results
    printf("\nCount of Positive numbers: %d\n", positive);
    printf("Count of Negative numbers: %d\n", negative);
    printf("Count of Zeroes: %d\n", zero);

    return 0;
}
