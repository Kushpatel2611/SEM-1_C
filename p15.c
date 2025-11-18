#include <stdio.h>
#include <time.h>

int main() {
    int seconds;
    clock_t start_time, current_time;
    
    printf("Enter seconds to count down: ");
    scanf("%d", &seconds);
    
    printf("Countdown starting...\n");
    
    for (int i = seconds; i >= 0; i--) {
        printf("%d\n", i);
        
        if (i > 0) {
            // Wait for approximately 1 second
            start_time = clock();
            while ((clock() - start_time) < CLOCKS_PER_SEC) {
                // Busy wait
            }
        }
    }
    
    printf("Countdown completed!\n");
   
    return 0;
}