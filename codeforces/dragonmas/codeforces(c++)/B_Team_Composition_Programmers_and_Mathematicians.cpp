#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,a,b;
void solve(){
    if(a>b)swap(a,b);
    int k=a/2;
    a=a%2;
    int ans=k;
    b=b-(k*2);
    int f=0;
    if(a&&(b>=3))f++,b-=3;
    while(ans&&(b>=6)){
        int l=min(ans,(b/3)/2);
        ans-=l;
        f+=(2*l);
        b=b-(l*2*3)+(l*2);
    }
    // cout<<ans+f;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        solve();
    }
}