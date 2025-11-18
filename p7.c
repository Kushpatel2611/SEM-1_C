#include <stdio.h>

int main() {
    int age;
    
    printf("=== Sunrise Amusement Park ===\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    // Using branch statements (if-else)
    if (age <= 12) {
        printf("Age: %d years\n", age);
        printf("Status: FREE ENTRY (Child)\n");
        printf("Welcome! Enjoy your day!\n");
    } else {
        printf("Age: %d years\n", age);
        printf("Status: REGULAR TICKET\n");
        printf("Ticket Price: Rs.500\n");
        printf("Please proceed to payment counter.\n");
    }
   
    
    return 0;
}