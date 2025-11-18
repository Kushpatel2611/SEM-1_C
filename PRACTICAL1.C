#include <stdio.h>

int main()
{
    int marks;

    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);

    // Validate input marks
    if (marks < 0 || marks > 100)
    {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    }
    else
    {
        // Use nested ternary operators to determine grade
        char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                                       : (marks >= 70)   ? 'C'
                                       : (marks >= 60)   ? 'D'
                                                         : 'F';

        printf("Student's Grade: %c\n", grade);
        return 0;
    }
}