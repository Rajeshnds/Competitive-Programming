#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N],b[N],c[N];
string s,t;
vector<vector<int>>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void dfs(int i){
    if(a[i])return;
    a[i]=1;
    k++;
    for(auto j:v[i]){
        dfs(j);
    }
}
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                x=(a[i]-a[j]);
                y=(b[i]-b[j]);
                if(x*x+y*y<=c[i]*c[i]){
                    v[i].push_back(j);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        fill(a,a+n+1,0);
        k=0;
        dfs(i);
        ans=max(ans,k);
    }
    cout<<ans;
}
void read_file(){
    freopen("moocast.in","r",stdin);
    freopen("moocast.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    v.assign(n+1,{});
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i]>>c[i];
    solve();   
}