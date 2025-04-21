






































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




// Pseudocode:
// naiveStringMatch(T, P):
//     n = length of T
//     m = length of P

//     for i from 0 to n - m:
//         match = true
//         for j from 0 to m - 1:
//             if T[i + j] != P[j]:
//                 match = false
//                 break
//         if match:
//             print "Pattern found at index", i

// Time Complexity: O(n*m) in worst case, O(n) in best/avg case