// #include <iostream>
// using namespace std;
// #define nV 4
// #define INF 999

// void printMatrix(int matrix[][nV]);
// void floydWarshall(int graph[][nV]) {
//   int matrix[nV][nV], i, j, k;
//   for (i = 0; i < nV; i++)
// 	for (j = 0; j < nV; j++)
//   	matrix[i][j] = graph[i][j];

//   for (k = 0; k < nV; k++) {
// 	for (i = 0; i < nV; i++) {
//   	for (j = 0; j < nV; j++) {
//     	if (matrix[i][k] + matrix[k][j] < matrix[i][j])
//       	matrix[i][j] = matrix[i][k] + matrix[k][j];
//   	}
// 	}
//   }
//   printMatrix(matrix);
// }

// void printMatrix(int matrix[][nV]) {
//   for (int i = 0; i < nV; i++) {
// 	for (int j = 0; j < nV; j++) {
//   	if (matrix[i][j] == INF)
//     	printf("%4s", "INF");
//   	else
//     	printf("%4d", matrix[i][j]);
// 	}
// 	printf("\n");
//   }
// }
// int main() {
//   int graph[nV][nV] = {{0, 3, INF, 5},
//          	{2, 0, INF, 4},
//          	{INF, 1, 0, INF},
//          	{INF, INF, 2, 0}};
//   floydWarshall(graph);
// }

#include <bits/stdc++.h>
using namespace std;
 
 
 
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
 
 
 
/* Driver code */
int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
     
    int m = strlen(X);
    int n = strlen(Y);
     
    cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ;
     
    return 0;
}