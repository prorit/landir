






































/*
#include <stdio.h>
#include <conio.h>

#define N 8 // Change N for different board sizes

// Function to print the solution
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", board[i][j] ? 'Q' : '-');
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if a queen can be placed at board[row][col]
int isSafe(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i]) return 0;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return 0;
    }
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j]) return 0;
    }
    return 1;
}

// Recursive function to solve N-Queen problem
int solveNQUtil(int board[N][N], int col) {
    if (col >= N) {
        printSolution(board);
        return 1;
    }
    int res = 0;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            res = solveNQUtil(board, col + 1) || res;
            board[i][col] = 0; // Backtrack
        }
    }
    return res;
}

// Function to solve the N-Queen problem
void solveNQ() {
    int board[N][N] = {0};
    if (!solveNQUtil(board, 0)) {
        printf("No solution exists\n");
    }
}

int main() {
    clrscr();
    solveNQ();
    getch();
    return 0;
}
*/