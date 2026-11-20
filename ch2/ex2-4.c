/* Exercise 2-4 Write an alternative version of squeeze (s1, s2) that deletes each character in s1 that matches any character in string s2. */

#include <stdio.h>
void squeeze(char s[], int c);

int main() 
{
    char test_string[12] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};

    squeeze(test_string, 'e');
    printf("%s", test_string);
    
    return 0;
}

void squeeze(char s[], int c) 
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c) {
            s[j++] = s[i];
            printf("s[%d] %c\n", j - 1, s[j - 1]);
        }
    }
    s[j] = '\0';
}

// When we do not explicity allocate for a terminating character, this does not work and acceses extra memory. however shouldn't it technicall segfault instead? And where does that extra memory come from?
