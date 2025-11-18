#include<stdio.h>
#include<math.h>

int validTri(int a, int b, int c) {
    if (a < 0 || b < 0 || c < 0) {
        return -1;
    }
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    } else {
        return 0;
    }
}

double TriaArea(int a, int b, int c) {
    int isValid = validTri(a, b, c);
    double s, A;
    
    if (isValid == -1) {
        printf("Enter valid value.");
        return -1;
    } else if (isValid == 1) {
        s = (a + b + c) / 2.0;  // Use 2.0 for floating-point division
        A = s * (s - a) * (s - b) * (s - c);  // Correct grouping
        A = sqrt(A);
        return A;
    } else {
        printf("These sides don't form a valid triangle.");
        return -1;
    }
}

int main() {
    double Area = TriaArea(3, 4, 5);
    if (Area != -1) {
        printf("Area: %.2f\n", Area);
    }
    
    return 0;
}