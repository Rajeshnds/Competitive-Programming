#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
string s,t;
int total_trees,total_colors,total_groups;
vector<int>tree_color;
vector<vector<int>>color_quantity;
ll dp[101][101][101];
void solve(){
    // i - trees
    // j - beauty
    // k - color
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                dp[i][j][k]=inf;
            }
        }
    }
    if(tree_color[1]==0){
        for(int i=1;i<=total_colors;i++)dp[1][1][i]=color_quantity[1][i];
    }
    else dp[1][1][tree_color[1]]=0;

    for(int i=2;i<=total_trees;i++){
        for(int j=1;j<=total_groups;j++){
            if(tree_color[i]==0){
                for(int k=1;k<=total_colors;k++){
                    dp[i][j][k]=min(dp[i][j][k],dp[i-1][j][k]+color_quantity[i][k]);
                    for(int l=1;l<=total_colors;l++){
                        if(l!=k){
                            dp[i][j][k]=min(dp[i][j][k],dp[i-1][j-1][l]+color_quantity[i][k]);
                        }
                    }
                }
            }
            else{
                for(int k=1;k<=total_colors;k++){
                    if(k==tree_color[i]){
                        dp[i][j][k]=min(dp[i][j][k],dp[i-1][j][k]);
                    }
                    else{
                        dp[i][j][tree_color[i]]=min(dp[i][j][tree_color[i]],dp[i-1][j-1][k]);
                    }
                }
            }
        }
    }

    ll ans=inf;
    for(int i=1;i<=total_colors;i++){
        ans=min(ans,dp[total_trees][total_groups][i]);
    }
    if(ans==inf)cout<<-1;
    else cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    // total_trees<=100
    // total_colors<=100
    // total_groups<=100
    cin>>total_trees>>total_colors>>total_groups;
    tree_color.assign(total_trees+1,0);
    color_quantity.assign(total_trees+1,vector<int>(total_colors+1,0));
    for(int i=1;i<=total_trees;i++)cin>>tree_color[i];
    for(int i=1;i<=total_trees;i++){
        for(int j=1;j<=total_colors;j++){
            cin>>color_quantity[i][j];
        }
    }
    solve();
}

