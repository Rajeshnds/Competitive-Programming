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
void dfs(int i){
    if(a[i])return;
    a[i]=1;
    k++;
    for(auto j:v[i]){
        if(!st.count(j))dfs(j);
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        fill(a,a+n+1,0);
        k=0;
        for(int j=1;j<=n;j++){
            if(!st.count(j)){
                dfs(j);
                if(k==n-i+1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                cin>>y;
                st.insert(y);
                break;
            }
        }
    }
}
void read_file(){
    freopen("closing.in","r",stdin);
    freopen("closing.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }   
    solve();
}