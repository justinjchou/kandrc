/* Exercise 2-3 
 * Write a function htoi(s), which converts a string of hexadecimal digits 
 * (including an optional 0x or 0x into its equivalent integer value. 
 * The allowable digitsare 0 through 9, a through f, A through F.
 */
#include <stdio.h>
#include <limits.h>
#define MAXLINE 1000

void htoi();
int atoi(char c[]);

int main() {
    htoi();

    return 0;
} 

// Convert hexadecimal to decimal
void htoi() {
    char c;
    int i;
    int j = 0;
    char character[CHAR_MAX];
    int character_converted;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF; ++i) {
        character[j] = c;
        if (c == '\n') {
            j = 0;
            character_converted = atoi(character);
            if (character_converted >= 0 && character_converted <= 9) {
                printf("%d\n", character_converted);
            }
            else if (character_converted >= 10 && character_converted <= 15) {
                if (character_converted == 10) {
                    printf("A\n");
                }
                if (character_converted == 11) {
                    printf("B\n");
                }
                if (character_converted == 12) {
                    printf("C\n");
                }
                if (character_converted == 13) {
                    printf("D\n");
                }
                if (character_converted == 14) {
                    printf("E\n");
                }
                if (character_converted == 15) {
                    printf("F\n");
                }
            }
            else {
                printf("Out of range!");
            }
        }
        ++j;
    }
}

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
