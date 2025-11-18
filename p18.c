#include <stdio.h>

int main() {
    int vertical, horizontal;
    
    printf("Enter the size of table vertically: ");
    scanf("%d", &vertical);
    printf("Enter the size of table horizontally: ");
    scanf("%d", &horizontal);
    
    printf("\nMultiplication Table (%d x %d):\n", vertical, horizontal);
    
    for (int i = 1; i <= vertical; i++) {
        for (int j = 1; j <= horizontal; j++) {
            if (j == horizontal) {
                printf("%d", i * j);  // No space after last number in row
            } else {
                printf("%d  ", i * j);  // Two spaces between numbers
            }
        }
        printf("\n");
    }
    
    return 0;
}