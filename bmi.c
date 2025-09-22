#include <stdio.h>

int main() 
{
    float weight, height, bmi;

    // Input weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // BMI formula
    bmi = weight / (height * height);

    // Print BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Check BMI category
    if (bmi < 18.5) 
    {
        printf("You are Underweight.\n");
    } 
    else if (bmi >= 18.5 && bmi < 25) 
    {
        printf("You have Normal weight.\n");
    } 
    else if (bmi >= 25 && bmi < 30) 
    {
        printf("You are Overweight.\n");
    } 
    else 
    {
        printf("You are Obese.\n");
    }

    return 0;
}
