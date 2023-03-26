#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int even=0,odd=0,odd_index=0,even_index=0;
    for(int i=1;i<=n;i++){
        if(a[i]%2==0)even++,even_index=i;
        if(a[i]%2==1)odd++,odd_index=i;
    }
    if(even==1)cout<<even_index;
    else cout<<odd_index;
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
    solve();
}