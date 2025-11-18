#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("===================================================\n");
    printf("    TECHNEST UNIVERSITY - DATA TYPE EXPLORER\n");
    printf("            CodeMasters Programming Club\n");
    printf("===================================================\n\n");
    
    printf(" DATA TYPE SIZES (in bytes):\n");
    printf("================================\n");
    
    // Character types
    printf("Character Types:\n");
    printf("  char:               %zu byte\n", sizeof(char));
    printf("  signed char:        %zu byte\n", sizeof(signed char));
    printf("  unsigned char:      %zu byte\n", sizeof(unsigned char));
    printf("\n");
    
    // Integer types
    printf("Integer Types:\n");
    printf("  short:              %zu bytes\n", sizeof(short));
    printf("  unsigned short:     %zu bytes\n", sizeof(unsigned short));
    printf("  int:                %zu bytes\n", sizeof(int));
    printf("  unsigned int:       %zu bytes\n", sizeof(unsigned int));
    printf("  long:               %zu bytes\n", sizeof(long));
    printf("  unsigned long:      %zu bytes\n", sizeof(unsigned long));
    printf("  long long:          %zu bytes\n", sizeof(long long));
    printf("  unsigned long long: %zu bytes\n", sizeof(unsigned long long));
    printf("\n");
    
    // Floating point types
    printf("Floating Point Types:\n");
    printf("  float:              %zu bytes\n", sizeof(float));
    printf("  double:             %zu bytes\n", sizeof(double));
    printf("  long double:        %zu bytes\n", sizeof(long double));
    printf("\n");
    
    printf(" DATA TYPE RANGES:\n");
    printf("================================\n");
    
    // Character type ranges
    printf("Character Type Ranges:\n");
    printf("  char:               %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("  signed char:        %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("  unsigned char:      0 to %u\n", UCHAR_MAX);
    printf("\n");
    
    // Integer type ranges
    printf("Integer Type Ranges:\n");
    printf("  short:              %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("  unsigned short:     0 to %u\n", USHRT_MAX);
    printf("  int:                %d to %d\n", INT_MIN, INT_MAX);
    printf("  unsigned int:       0 to %u\n", UINT_MAX);
    printf("  long:               %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("  unsigned long:      0 to %lu\n", ULONG_MAX);
    printf("  long long:          %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("  unsigned long long: 0 to %llu\n", ULLONG_MAX);
    printf("\n");
    
    // Floating point type ranges
    printf("Floating Point Type Ranges:\n");
    printf("  float:\n");
    printf("    Minimum:          %e\n", FLT_MIN);
    printf("    Maximum:          %e\n", FLT_MAX);
    printf("    Precision:        %d decimal digits\n", FLT_DIG);
    printf("    Epsilon:          %e\n", FLT_EPSILON);
    printf("\n");
    
    printf("  double:\n");
    printf("    Minimum:          %e\n", DBL_MIN);
    printf("    Maximum:          %e\n", DBL_MAX);
    printf("    Precision:        %d decimal digits\n", DBL_DIG);
    printf("    Epsilon:          %e\n", DBL_EPSILON);
    printf("\n");
    
    printf("  long double:\n");
    printf("    Minimum:          %Le\n", LDBL_MIN);
    printf("    Maximum:          %Le\n", LDBL_MAX);
    printf("    Precision:        %d decimal digits\n", LDBL_DIG);
    printf("    Epsilon:          %Le\n", LDBL_EPSILON);
    printf("\n");
    
    
 
    return 0;
}