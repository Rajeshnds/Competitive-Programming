#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<vector<int>>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    v.assign(n+1,{});
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }   
}