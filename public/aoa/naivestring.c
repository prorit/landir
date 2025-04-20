






































/*
#include <stdio.h>
#include <string.h>
#include <conio.h>

// Function to perform Naive String Matching
void naiveStringMatch(char *text, char *pattern) {
    int textLen = strlen(text);
    int patternLen = strlen(pattern);
    
    printf("Pattern found at indices: ");
    int found = 0;
    
    for (int i = 0; i <= textLen - patternLen; i++) {
        int j;
        for (j = 0; j < patternLen; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == patternLen) {
            printf("%d ", i);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No match found");
    }
    printf("\n");
}

int main() {
    clrscr();

    char text[] = "ABABDABACDABABCABAB";
    char pattern[] = "ABABCABAB";
    
    naiveStringMatch(text, pattern);
    
    getch();
    return 0;
}
*/
