#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],a1,a2,b1,b2;
string s,t;
vector<vector<int>>v;
set<pair<int,int>>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(vector<vector<int>>v){
    k=1;
    for(int j=b1-1;j>=1;j--){
        if(k==1)v[a1][j]=2,k*=-1;
        else v[a1][j]=1,k*=-1;
    }
    int l=k;
    for(int i=a1-1;i>=1;i--){
        for(int j=1;j<=m;j++){
            if(k==1)v[i][j]=2,k*=-1;
            else v[i][j]=1,k*=-1;
        }
        l*=-1;
        k=l;
    }
    k=1;
    for(int j=b1+1;j<=m;j++){
        if(k==1)v[a1][j]=2,k*=-1;
        else v[a1][j]=1,k*=-1;
    }
    l=k;
    for(int i=a1+1;i<=n;i++){
        for(int j=m;j>=1;j--){
            if(k==1)v[i][j]=2,k*=-1;
            else v[i][j]=1,k*=-1;
        }
        l*=-1;
        k=l;
    }
    int i=a2,j=b2;
    v[i][j]=2;
    if(v[i][j+1]==2)v[i][j+1]=3;
    if(v[i][j-1]==2)v[i][j-1]=3;
    if(v[i-1][j]==2)v[i-1][j]=3;
    if(v[i+1][j]==2)v[i+1][j]=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m>>a1>>b1>>a2>>b2;
        vector<vector<int>>v(n+2,vector<int>(m+2,0));
        // v.assign(n+2,{});
        // for(int i=0;i<=n+1;i++){
        //     for(int j=0;j<=m+1;j++){
        //         v[i].push_back(0);
        //     }
        // }
        v[a1][b1]=1;
        solve(v);
    }
}

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