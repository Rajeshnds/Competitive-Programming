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
        if(i+1<=n){
            cost[i+1]=min(cost[i+1],cost[i]+abs(height[i]-height[i+1]));
        }
        if(i+2<=n){
            cost[i+2]=min(cost[i+2],cost[i]+abs(height[i]-height[i+2]));
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
    cin>>n;
    for(int i=1;i<=n;i++)cin>>height[i],cost[i]=2e9;
    solve();   
}