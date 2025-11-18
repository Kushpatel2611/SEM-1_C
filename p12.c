#include <stdio.h>

int main() {
    printf("Library Book Catalog:\n");
    printf("=====================\n");
    
    // Loop through all book IDs from 1 to 50
    for(int i = 1; i <= 50; i++) {
        // Check if current book is a special edition (every 5th book)
        if(i % 5 == 0) {
            printf("Book ID: %d (Special Edition)\n", i);
        } else {
            printf("Book ID: %d\n", i);
        }
    }
    
    
    return 0;
}