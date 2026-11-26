/* Exercise 2-5 Write the function any(s1, s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) */

#include <stdio.h>
#define MAX 1000

int any(char s[], char remover[]);

int main()
{
	int c, i;
    char s[MAX];
    char remover[2] = {'e', '\0'};
    
    // Take the string from the file and add it to an array to be used for comparison
    while((c=getchar()) != EOF)
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    printf("%d\n", any(s, remover));
}

int any(char s[], char remover[])
{
	int i;
	// Iterate through the array remover
	for (int k = 0; remover[k] != '\0'; ++k)
	{
		// Iterate through the input array
		for (i = 0; s[i] != '\0'; ++i) {
			// IF we see the remover return the position
			if (s[i] == remover[k]) {
				printf("s[i] %c\n", s[i]);
				printf("remover[i] %c\n", remover[i]);
				return i;
			}
		}
		// Return -1 if we do not se any characters from remover
		return -1;
	}
}
