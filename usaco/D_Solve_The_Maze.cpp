#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],r;
string s[55],t;
vector<ll>v;
set<pair<ll,ll>>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void dfs(int i,int j){
    if(st.count({i,j}))return;
    st.insert({i,j});
    if(i==n-1&&j==m-1)r=1;
    if(i+1<n){
        if(s[i+1][j]!='#')dfs(i+1,j);
    }
    if(i-1>=0){
        if(s[i-1][j]!='#')dfs(i-1,j);
    }
    if(j+1<m){
        if(s[i][j+1]!='#')dfs(i,j+1);
    }
    if(j-1>=0){
        if(s[i][j-1]!='#')dfs(i,j-1);
    }
}
void solve(){
    bool is_good=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='B'){
                if(i+1<n){
                    if(s[i+1][j]=='G')is_good=false;
                    if(s[i+1][j]!='B')s[i+1][j]='#';
                }
                if(i-1>=0){
                    if(s[i-1][j]=='G')is_good=false;
                    if(s[i-1][j]!='B')s[i-1][j]='#';
                }
                if(j+1<m){
                    if(s[i][j+1]=='G')is_good=false;
                    if(s[i][j+1]!='B')s[i][j+1]='#';
                }
                if(j-1>=0){
                    if(s[i][j-1]=='G')is_good=false;
                    if(s[i][j-1]!='B')s[i][j-1]='#';
                }
            }
        }
    }
    st.clear();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='G'&&!st.count({i,j})){
                r=0;
                dfs(i,j);
                if(!r)is_good=false;
            }
        }
    }
    cout<<(is_good?"YES":"NO");
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        solve();
    }   
}