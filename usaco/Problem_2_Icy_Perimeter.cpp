#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s[N],t;
vector<int>v;
set<pair<int,int>>st;
map<int,int>mp;
pair<int,int>p[N];
void dfs(int i,int j){
    if(i<0||i>=n||j<0||j>=n){
        y++;
        return;
    }
    if(st.count({i,j})){
        return;
    }
    if(s[i][j]=='.'){
        y++;
        return;
    }
    st.insert({i,j});
    if(s[i][j]=='#')x++;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
}
void solve(){
    int area=0,p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!st.count({i,j})&&s[i][j]=='#'){
                x=0;
                y=0;
                dfs(i,j);
                if(x>=area){
                    if(x>area){
                        area=x;
                        p=y;
                    }
                    else p=min(p,y);
                }
            }
        }
    }
    cout<<area<<" "<<p;
}
void read_file(){
    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];
    solve();   
}