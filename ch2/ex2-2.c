/* Exercise 2-2 Write a loop equivalent to the for loop above without using && or ||." */
#include <stdio.h>

int main() {
    int lim = 100;
    int c;
    char s[lim];
    int i = 0;

    /*
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
    {
        s[i] = c;
    }
    for (int j = 0; j < i; ++j)
    {
        printf("%c", s[j]);
    }
    */

    /* c is not equal to EOF, and get char is not newline
     *
     * Check for true:
     * if i is less than lim and c is not \n and c is not EOF
     */
    // for (i = 0; (i < lim - 1) <= ((c = getchar()) != '\n') && (c != EOF); ++i)
    for (i = 0; (i < lim - 1) <= ((c = getchar()) != '\n') >= (c != EOF); ++i)
    {
        s[i] = c;
    }
    for (int j = 0; j < i; ++j)
    {
        printf("%c", s[j]);
    }
    /*
    char newline = '\n';
    printf("%u\n", newline);
    */
}
