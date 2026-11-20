/* Exercise 2-5 Write the function any(s1, s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) */

#include <stdio.h>

void any(char s1[], char s2[]);

int main()
{
    char test_string[12] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    char test_any[3] = {'e', 'o', 'x'};

    any(test_string, test_any);
}

void any(char s1[], char s2[])
{
    int found = -1;
    int found2 = -1;
    int found3 = -1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[0]) {
            found = i;
        }
        else if (s1[i] == s2[1]) {
            found2 = i;
        }
        else if (s1[i] == s2[2]) {
            found2 = i;
        }
    }
    printf("%d \n", found);
    printf("%d \n", found2);
    printf("%d \n", found3);
}
