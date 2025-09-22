#include <stdio.h>

int main() {
    int a, b, c;

    // Input sides
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity (Triangle inequality theorem)
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is VALID.\n");

        // Check for Equilateral
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check for Isosceles
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        // Check for Right angled (Pythagoras theorem)
        else if ((a * a + b * b == c * c) ||
                 (a * a + c * c == b * b) ||
                 (b * b + c * c == a * a)) {
            printf("The triangle is Right-angled.\n");
        }
        // If none of the above, it's Scalene
        else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}


