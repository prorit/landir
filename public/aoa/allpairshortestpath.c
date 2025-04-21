






































/*
#include <stdio.h>
#include <conio.h>

#define INF 99999 // Define a large value to represent infinity
#define V 4       // Number of vertices

// Function to print the solution matrix
void printSolution(int dist[][V]) {
    printf("Shortest distances between every pair of vertices:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("INF ");
            else
                printf("%d ", dist[i][j]);
        }
        printf("\n");
    }
}

// Floyd Warshall Algorithm implementation
void floydWarshall(int graph[][V]) {
    int dist[V][V];

    // Initialize distance matrix with the given graph
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    // Updating distances using Floyd Warshall algorithm
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    // Print the final shortest distances
    printSolution(dist);
}

int main() {
    clrscr();
    // Predefined adjacency matrix representation of the graph
    int graph[V][V] = {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };
    
    floydWarshall(graph);
  
    getch();  
    return 0;
}
*/





// Floyd-Warshall(w, n){ // w: weights, n: number of vertices
//    for i = 1 to n do // initialize, D (0) = [wij]
//       for j = 1 to n do{
//          d[i, j] = w[i, j];
//       }
//       for k = 1 to n do // Compute D (k) from D (k-1)
//          for i = 1 to n do
//             for j = 1 to n do
//                if (d[i, k] + d[k, j] < d[i, j]){
//                   d[i, j] = d[i, k] + d[k, j];
//                }
//       return d[1..n, 1..n];
// }
// Time Complexity: O(n^3) in worst/best/average case
