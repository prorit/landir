






































/*
#include <stdio.h>
#include <conio.h>

// Binary Search function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    clrscr();

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sorted array: ");
    printArray(arr, n);

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    
    getch();
    return 0;
}
*/





// Pseudocode: Binary-Search(A, key)
// 1. Set low = 0 and high = n-1
// 2. While low <= high do
//    mid = (low + high) / 2
//    if A[mid] == key then
//       return mid
//    else if A[mid] < key then
//       low = mid + 1
//    else
//       high = mid - 1
//    end if
//  end while
// 3. return -1 (key not found)
// 4. end
//
// Time Complexity: O(log n) in best/avg/worst case