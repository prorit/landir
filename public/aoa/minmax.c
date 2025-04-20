






































/*
#include <stdio.h>
#include <conio.h>

int main() {
    clrscr();

    int n, i;
    int max, min;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    getch();
    return 0;
}
*/