






































/*
#include <stdio.h>
#include <conio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Swap elements
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to analyze Selection Sort
int main() {
    clrscr();
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, n);
    
    printf("Sorted Array: ");
    printArray(arr, n);
    
    getch();
    return 0;
}
*/

// ALGO:
// 1. Set MIN to location 0.
// 2. Search the minimum element in the list.
// 3. Swap with value at location MIN.
// 4. Increment MIN to point to next element.
// 5. Repeat until the list is sorted.
// Algorithm: Selection-Sort (A)
// fori← 1 to n-1 do
//   min j ←i;
//   min x ← A[i]
//   for j ←i + 1 to n do
//      if A[j] < min x then
//         min j ← j
//         min x ← A[j]
//   A[min j] ← A [i]
//   A[i] ← min x
// 
// Time Complexity (Worst/Best/Avg): O(n^2)