
#include <stdio.h>

int main() {
    // Park dimensions provided by Mr. Compute
    float length = 70.0;
    float breadth = 90.0;
    
    // Calculations
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    
    // Display the park details and calculations
    printf("=== COMMUNITY PARK BLUEPRINT CALCULATIONS ===\n\n");
    printf("Park Dimensions:\n");
    printf("Length:  %.2f meters\n", length);
    printf("Breadth: %.2f meters\n\n", breadth);
    
    printf("Calculations:\n");
    printf("Area:     %.2f square meters\n", area);
    printf("Perimeter: %.2f meters\n\n", perimeter);
    
    printf("Park Features:\n");
    printf("- Jogging track along the perimeter\n");
    printf("- Ample space for various activities\n");
    printf("- Total area suitable for community needs\n");

   
    
    return 0;
}
