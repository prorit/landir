






































/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Structure to represent a job
typedef struct {
    char id[10]; // Process ID (P1, P2, ...)
    int weight;
    int deadline;
} Job;

// Function to compare jobs based on weight (Descending Order)
int compare(const void *a, const void *b) {
    return ((Job *)b)->weight - ((Job *)a)->weight;
}

// Function to find the maximum deadline
int findMaxDeadline(Job jobs[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > max) {
            max = jobs[i].deadline;
        }
    }
    return max;
}

// Function to perform Job Sequencing with Deadline
void jobSequencing(Job jobs[], int n) {
    // Sort jobs in descending order of weight
    qsort(jobs, n, sizeof(Job), compare);
    
    int maxDeadline = findMaxDeadline(jobs, n);
    char schedule[maxDeadline][10];
    for (int i = 0; i < maxDeadline; i++) {
        strcpy(schedule[i], "-"); // Initialize empty schedule
    }

    int totalWeight = 0;

    // Process jobs
    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (strcmp(schedule[j], "-") == 0) { // Slot available
                strcpy(schedule[j], jobs[i].id);
                totalWeight += jobs[i].weight;
                break;
            }
        }
    }

    // Print scheduled jobs
    printf("Job Sequence: ");
    for (int i = 0; i < maxDeadline; i++) {
        if (strcmp(schedule[i], "-") != 0) {
            printf("%s ", schedule[i]);
        }
    }
    printf("\nTotal Weight: %d\n", totalWeight);
}

// Driver code
int main() {
    clrscr();

    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    Job jobs[n];
    printf("Enter process ID, weight, and deadline for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%s %d %d", jobs[i].id, &jobs[i].weight, &jobs[i].deadline);
    }
    
    jobSequencing(jobs, n);
    
    getch();
    return 0;
}
*/