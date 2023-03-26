// All important DP algorithm

// concept of dp[n][n];
    // dp[i][j] = no of ways to select good subsequence of size j from elements (a1,a2,a3.....ai);
    // total answer will be summation of dp[n][i] (for all i from 1 to n);

// All important GRAPH algorithm

// Ford Fulkerson algorithm : solves maximum flow graph problem

// Bellman Ford's Algorithm : same as floyd-warshall negative weight 

// Dijkstra Algorithm is same as floyd-warshall but it only take one source vertex and use greedy method. i.e, we can find shortest path from any one vertex and (take n^2 time) if we do for all n it will take (n^3) time.

// floyd-warshall algorithm is used to find shortest path between each pair in directed or undirected graph using dp take(n^3). It doesn't work in case of negative weight.
void floyd_warshall(){
    int dp[n][n];
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            //for kth matrix    k-1      k-1     k-1  
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
}
// 
// eof
// eof
// 



// Algorithm (DP):
// convex hull algorithm
// Levenstein distance (minimum edit distance)


// Algorithm (graph):
