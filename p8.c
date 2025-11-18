#include <stdio.h>

int main() {
    int age;
    
    printf("=== Spark Savings Bank - Eligibility Checker ===\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    // Using branch statements for eligibility check
    if (age >= 18) {
        printf("Congratulations! You are ELIGIBLE to open a savings account.\n");
        printf("Please proceed to the counter for account opening.\n");
    } else {
        printf("We're sorry! You are NOT ELIGIBLE to open a savings account yet.\n");
        printf("You need to be at least 18 years old.\n");
        printf("Please visit us again when you turn 18!\n");
    }
    
    return 0;
}