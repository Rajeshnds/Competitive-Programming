#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<pair<int,int>>st;
map<ll,ll>mp;
void calc_dis(int r,int c){
    if(st.count({r,c}))return;
    st.insert({r,c});
    x=abs(1-r)+abs(1-c);
    x=max(x,abs(n-r)+abs(m-c));
    x=max(x,abs(1-r)+abs(m-c));
    x=max(x,abs(n-r)+abs(1-c));
    v.push_back(x);
    if(r+1<=n){
        calc_dis(r+1,c);
    }
    if(c+1<=m){
        calc_dis(r,c+1);
    }
    if(r-1>=1){
        calc_dis(r-1,c);
    }
    if(c-1>=1){
        calc_dis(r,c-1);
    }
}
void solve(){
    v.clear();
    st.clear();
    int r=(n+1)/2,c=(m+1)/2;
    calc_dis(r,c);
    sort(v.begin(),v.end());
    for(auto i:v)cout<<i<<" ";
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
        solve();
    }   
}