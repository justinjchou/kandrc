/* Exercise 2-3 
 * Write a function htoi(s), which converts a string of hexadecimal digits 
 * (including an optional 0x or 0x into its equivalent integer value. 
 * The allowable digitsare 0 through 9, a through f, A through F.
 */
#include <stdio.h>
#define MAXLINE 1000

int htoi();

int main() {
    char c;
    /*
    for (int i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        printf("%c", c);
    }
    */
    printf("%x\n", 0);
    printf("%x\n", 1);
    printf("%x\n", 2);
    printf("%x\n", 3);
    printf("%x\n", 4);
    printf("%x\n", 5);
    printf("%x\n", 6);
    printf("%x\n", 7);
    printf("%x\n", 8);
    printf("%x\n", 9);
    printf("%x\n", 10);
    printf("%x\n", 100);
    // htoi();
} 

int htoi() {
    return 0;
}
