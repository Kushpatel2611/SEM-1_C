#include <stdio.h>

int main() {
    double balance = 5000.0;
    double withdrawAmount;
    char choice;
    
    printf("=== Welcome to National Bank of Bharat ATM ===\n");
    
    do {
        printf("\nCurrent Balance: Rs.%.2f\n", balance);
        printf("Enter amount to withdraw: Rs.");
        scanf("%lf", &withdrawAmount);
        
        if (withdrawAmount <= 0) {
            printf("Invalid amount! Please enter a positive value.\n");
        }
        else if (withdrawAmount > balance) {
            printf("Insufficient balance.\n");
            printf("You tried to withdraw Rs.%.2f but only have Rs.%.2f\n", withdrawAmount, balance);
        }
        else {
            balance -= withdrawAmount;
            printf("Withdrawal successful! Remaining balance: Rs.%.2f\n", balance);
        }
        
        // Check if balance is zero
        if (balance == 0) {
            printf("\nYour account balance is now zero. Cannot perform more transactions.\n");
            break;
        }
        
        // Ask if user wants to continue
        printf("\nDo you want to perform another transaction? (y/n): ");
        scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("\nThank you for using National Bank of Bharat ATM!\n");
    printf("Final Balance: Rs.%.2f\n", balance);
    
    
    return 0;
}