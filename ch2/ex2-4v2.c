/* Exercise 2-4 Write an alternative version of squeeze (s1, s2) that deletes each character in s1 that matches any character in string s2. */

#include <stdio.h>
#define MAX 1000

void squeeze1(char s[], char remover[]);

int main() 
{
    int c, i;
    i = 0;
    char s[MAX];
    char s_removed[MAX];
    char remover[4] = {'e', 'o', 't', '\0'};


    // Take the string from the file and add it to an array to be used for comparison
    while((c=getchar()) != EOF)
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    squeeze1(s,remover);
    printf("String with the desired character(s) removed\n%s", s);
    
    return 0;
}

// void squeeze1(char \*s, char \*remover)
void squeeze1(char s[], char remover[]) 
{
    int i, j;

    // Run through string s_removed of length
    for (int k = 0; remover[k] != '\0'; ++k) {
        // Go through the input array and check for remover character(s)
        for (i = j = 0; s[i] != '\0'; ++i) {
            if (s[i] != remover[k]) {
                s[j++] = s[i];
            }
        }
    }
    s[j] = '\0';
}
