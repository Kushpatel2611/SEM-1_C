#include <stdio.h>

int main() {
    float weight, height, bmi;
    
    printf("=============================================\n");
    printf("    ACTIVELIFE STUDIO BMI CALCULATOR\n");
    printf("=============================================\n\n");
    
    // Get user input
    printf("Welcome to ActiveLife Studio Health Monitor!\n\n");
    printf("Please enter your weight in kilograms: ");
    scanf("%f", &weight);
    
    printf("Please enter your height in meters: ");
    scanf("%f", &height);
    
    // Calculate BMI
    bmi = weight / (height * height);
    
    // Display results
    printf("\n=============================================\n");
    printf("           YOUR HEALTH REPORT\n");
    printf("=============================================\n");
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f m\n", height);
    printf("BMI:    %.2f\n\n", bmi);
    

    return 0 ;

}