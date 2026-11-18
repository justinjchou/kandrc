/* Write a program to determine the ranges of char, short, int, and long variabes, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. */
#include <stdio.h>
#include <limits.h>

int main() {
    /* printing the values of char */
    printf("Range of char_max is %u\n", CHAR_MAX);
    printf("Range of char_min is %d\n", CHAR_MIN);
    /* printing the values of signed char */
    printf("Range of SCHAR_MAX is %u\n", SCHAR_MAX);
    printf("Range of SCHAR_MIN is %d\n", SCHAR_MIN);
    /* printing the value of integer */
    printf("Range of INT_MAX is %d\n", INT_MAX);
    printf("Range of INT_MIN is %d\n", INT_MIN);
    printf("Range of UINT_MAX is %u\n", UINT_MAX);
    /* length modifier l indicates the corresponding argument is to be printed as a short or unsigned short */
    printf("Range of LONG_MAX is %Ld\n", LONG_MAX);
    printf("Range of LONG_MIN is %Ld\n", LONG_MIN);
    printf("Range of ULONG_MAX is %Lu\n", ULONG_MAX);
    return 0;
}
