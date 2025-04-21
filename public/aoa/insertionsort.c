






































/*
#include <stdio.h>
#include <conio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to analyze Insertion Sort
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
    
    insertionSort(arr, n);
    
    printf("Sorted Array: ");
    printArray(arr, n);
    
    getch();    
    return 0;
}
*/





// Algorithm:
// 1. If it is the first element, it is already sorted. return 1;
// 2. Pick next element
// 3. Compare with all elements in the sorted sub-list
// 4. Shift all the elements in the sorted sub-list that is greater than the value to be sorted
// 5. Insert the value
// 6. Repeat until list is sorted

// Pseudocode: Insertion-Sort(A)
// for j = 2 to A.length
//    key = A[j]
//    i = j  1
//    while i > 0 and A[i] > key
//       A[i + 1] = A[i]
//       i = i -1
//    A[i + 1] = key
//
// Time Complexity: O(n^2) in worst/avg, O(n) in best case