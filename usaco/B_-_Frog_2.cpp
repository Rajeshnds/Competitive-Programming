#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N],cost[N],height[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    cost[1]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i+j<=n){
                cost[i+j]=min(cost[i+j],cost[i]+abs(height[i]-height[i+j]));
            }
        }
    }
    cout<<cost[n];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>height[i],cost[i]=2e9;
    solve();
}