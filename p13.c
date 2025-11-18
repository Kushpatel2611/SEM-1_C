#include <stdio.h>

int main() {
    int water_level;
    
    for (water_level = 10; water_level < 100; water_level += 10) {
        printf("Current water level: %d liters\n", water_level);
    }
    
    printf("Tank is full.\n");
    
    return 0;
}