






































/*
#include <stdio.h>
#include <conio.h>

// Structure to represent an item
struct Item {
    int weight;
    int value;
};

// Function to swap two items
void swap(struct Item *a, struct Item *b) {
    struct Item temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort items based on value/weight ratio
void sortItems(struct Item arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            double ratio1 = (double)arr[j].value / arr[j].weight;
            double ratio2 = (double)arr[j + 1].value / arr[j + 1].weight;
            if (ratio1 < ratio2) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to solve the Fractional Knapsack problem
double fractionalKnapsack(struct Item arr[], int n, int capacity) {
    sortItems(arr, n);
    double totalValue = 0.0;
    for (int i = 0; i < n; i++) {
        if (capacity >= arr[i].weight) {
            capacity -= arr[i].weight;
            totalValue += arr[i].value;
        } else {
            totalValue += arr[i].value * ((double)capacity / arr[i].weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    clrscr();

    int n = 3;
    int capacity = 50;
    struct Item items[] = {{10, 60}, {20, 100}, {30, 120}};
    
    double maxValue = fractionalKnapsack(items, n, capacity);
    printf("Maximum value in Knapsack = %.2f\n", maxValue);

    getch();
    return 0;
}
*/





// Fract-knapsack (v, w, n, W)
// for w = 0 to W do
//    c[0, w] = 0
// for i = 1 to n do
//    c[i, 0] = 0
//    for w = 1 to W do
//       if wi  w then
//          if vi + c[i-1, w-wi] then
//             c[i, w] = vi + c[i-1, w-wi]
//          else c[i, w] = c[i-1, w]
//       else
//          c[i, w] = c[i-1, w]
// Time complexity: O(nW) in worst/best/average case
