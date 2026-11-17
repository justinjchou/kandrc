/* Write a program to determine the ranges of char, short, int, and long variabes, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. */
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Range of char is %d\n", CHAR_BIT);
    printf("Range of char_max is %d\n", CHAR_MAX);
    printf("Range of char_min is %d\n", CHAR_MIN);
    printf("Range of INT_MAX is %d\n", INT_MAX);
    printf("Range of INT_MIN is %d\n", INT_MIN);
    printf("Range of LONG_MAX is %ld\n", LONG_MAX);
    printf("Range of LONG_MIN is %ld\n", LONG_MIN);
    printf("Range of SCHAR_MAX is %d\n", SCHAR_MAX);
    printf("Range of SCHAR_MIN is %d\n", SCHAR_MIN);
    printf("Range of SCHAR_MAX is %d\n", SCHAR_MAX);
    printf("Range of UINT_MAX is %lu\n", UINT_MAX);
    printf("Range of ULONG_MAX is %ld\n", ULONG_MAX);
    printf("Range of USHRT_MAX is %d\n", USHRT_MAX);

    // Cannot compute char range
    char character = (char)-0;
    printf("Computed range of char is %d\n", (char)character);

    int integer_max = (int)(-0u >> 1);
    printf("Computed range of int is %d\n", integer_max);

    return 0;
}
