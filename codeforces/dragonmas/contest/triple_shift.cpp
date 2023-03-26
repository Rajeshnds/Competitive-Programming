#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=5e3+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],b[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void solve(){
    for(int i=1;i<=n;i++)if(a[i]!=b[i])k++;
    int r=1;
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i])r=0;
    }  
    if(r==0)cout<<"No";
    else cout<<(k%3==0?"Yes":"No");
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
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}