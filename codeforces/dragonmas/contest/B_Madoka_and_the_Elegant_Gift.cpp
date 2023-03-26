#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
int a1,b1,a2,b2;
string s[101],t;
vector<ll>v;
set<pair<int,int>>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void dfs(int i,int j){
    if(st.count({i,j}))return;
    st.insert({i,j});
    a1=min(a1,i);
    b1=min(b1,j);
    a2=max(a2,i);
    b2=max(b2,j);
    if(i+1<n&&s[i+1][j]!='0')dfs(i+1,j);
    if(i-1>=0&&s[i-1][j]!='0')dfs(i-1,j);
    if(j+1<m&&s[i][j+1]!='0')dfs(i,j+1);
    if(j-1>=0&&s[i][j-1]!='0')dfs(i,j-1);
}
void solve(){   
    int r=1;
    st.clear();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='1'&&!st.count({i,j})){
                a1=500;b1=500;a2=0;b2=0;
                dfs(i,j);
                for(int k=a1;k<=a2;k++){
                    for(int l=b1;l<=b2;l++){
                        if(s[k][l]=='0')r=0;
                    }
                }
            }
        }
    }
    cout<<(r?"YES":"NO");
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
        for(int i=0;i<n;i++)cin>>s[i];
        solve();
    }   
}