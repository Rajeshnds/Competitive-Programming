#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],r,c;
string s[101],t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void solve(){
    if(k==0)cout<<-1;
    else if(s[r][c-1]=='B'){
        cout<<0;
    }
    else if(s[r].find('B')!=-1)cout<<1;
    else{
        int d=0;
        for(int i=1;i<=n;i++){
            if(s[i][c-1]=='B')d=1;
        }
        if(d)cout<<1;
        else cout<<2;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m>>r>>c;
        k=0;
        for(int i=1;i<=n;i++){
            cin>>s[i];
            if(s[i].find('B')!=-1)k=1;
        }
        solve();
    }   
}