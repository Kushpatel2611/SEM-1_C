#include <stdio.h>

int main() {
    int choice;
    float total = 0;
    
    printf("=== Welcome to Foodies Restaurant ===\n");
    printf("Menu:\n");
    printf("1. Burger - RS.150\n");
    printf("2. Pizza - Rs.200\n");
    printf("3. Pasta - Rs.120\n");
    printf("4. Sandwich - Rs.100\n");
    printf("5. French Fries - Rs.80\n");
    printf("Enter 0 to finish ordering\n\n");
    
    do {
        printf("Enter your choice (1-5, or 0 to finish): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 0:
                break;  // Exit the loop
            case 1:
                total += 150;
                printf("Burger added. Current total: Rs.%.2f\n", total);
                break;
            case 2:
                total += 200;
                printf("Pizza added. Current total: Rs.%.2f\n", total);
                break;
            case 3:
                total += 120;
                printf("Pasta added. Current total: Rs.%.2f\n", total);
                break;
            case 4:
                total += 100;
                printf("Sandwich added. Current total: Rs.%.2f\n", total);
                break;
            case 5:
                total += 80;
                printf("French Fries added. Current total: Rs.%.2f\n", total);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    } while(choice != 0);
    
    printf("\n=== Order Summary ===\n");
    printf("Total Amount: Rs:%.2f\n", total);
    printf("Thank you for ordering at Foodies!\n");
    
    
    return 0;
}