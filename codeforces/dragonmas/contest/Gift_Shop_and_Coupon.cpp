#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        int ans=0,j=0;
        for(int i=1;i<=n;i++){
            if(a[i]<k){
                ans++;
                k-=a[i];
                j=i;
            }
        }
        if(j<n){
            if(k>=(a[j+1]+1)/2)ans++;
        }
        cout<<ans;
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