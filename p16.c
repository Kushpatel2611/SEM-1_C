#include <stdio.h>

int main() {
    int matchsticks = 21;
    int user_pick;
    
    printf("21 matchsticks. Pick 1-4. Avoid last one!\n");
    
    while (matchsticks > 0) {
        // User's turn
        printf("\nRemaining: %d\nYour pick: ", matchsticks);
        scanf("%d", &user_pick);
        
        // Check if input is valid
        while (user_pick < 1 || user_pick > 4 || user_pick > matchsticks) {
            printf("Invalid! Pick 1-4: ");
            scanf("%d", &user_pick);
        }
        
        matchsticks -= user_pick;
        
        // Check if user lost
        if (matchsticks == 0) {
            printf("You picked last! You lose!\n");
            break;
        }
        
        // Computer's turn
        printf("Computer picks: %d\n", 5 - user_pick);
        matchsticks -= (5 - user_pick);
        
        // Check if computer lost
        if (matchsticks == 0) {
            printf("Computer picked last! You win!\n");
        }
    }
    
    return 0;
}