/* Exercise 2-4 Write an alternative version of squeeze (s1, s2) that deletes each character in s1 that matches any character in string s2. */

#include <stdio.h>
#define MAX 1000

void squeeze(char s[], char s_removed[], char remover[]);
// char getline(s[]);

int main() 
{
    int c, i;
    i = 0;
    char s[MAX];
    char s_removed[MAX];
    // int remover;
    // char remover[2] = {'e', 'o'};
    char remover[3] = {'e', 'o', '\0'};


    /*
    printf("Type the character(s) to remove\n");
    remover = getchar();
    */

    // Take the string from the file and add it to an array to be used for comparison
    while((c=getchar()) != EOF)
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    // printf("s %s\n", s);

    squeeze(s, s_removed, remover);
    printf("String with the desired character(s) removed\n%s", s_removed);
    
    return 0;
}

/* Takes in a char s[] and the letters to be removed c[]
 *  i.e. input = "hello world"
 *  input from user characters to remove = "e" "o"
 *  copy that string to an array
 *  parse out the characters to be removed 
 *  loop through the characters to be removed and check against the input
*/ 
/* TODO 
 * Take the string from the text file and remove multiple characters
 * 1) Take text from file and remove based on input desired
*/
void squeeze(char s[], char s_removed[], char remover[]) 
{
    int i, j;

    /*
    for (i = j = 0; s[i] != '\0'; ++i) {
        for (int k = 0; remover[k] != '\0'; ++k) {
            if (s[i] != remover[k]) {
                s_removed[j++] = s[i];
                ++i;
            }
        }
    }
   */ 

    for (int k = 0; remover[k] != '\0'; ++k) {
        for (i = j = 0; s[i] != '\0'; ++i) {
            // checking for first time
            if (i == 0) {
                if (s[i] != remover[k]) {
                    s_removed[j++] = s[i];
                }
            }
            else {
                if (s_removed[i] != remover[k] && s_removed[i] != '\0') {
                    s_removed[j++] = s_removed[i];
                }
            }
        }
    }

    s_removed[j] = '\0';
}

/*
void getline(char s[]) {
    int c, i;
    
    for (i = 0; i < lim -1 && (c=getchar()) != EOF && c !='\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';

    return s[];
}
*/
