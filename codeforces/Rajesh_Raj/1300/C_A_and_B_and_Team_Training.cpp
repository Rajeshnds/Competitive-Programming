#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,expr,newb;
void solve(){
    if(expr<newb)swap(expr,newb);
    int diff=min(expr-newb,newb);
    int ans=diff;
    newb-=diff;
    ans+=2*(newb/3);
    if(newb%3==2)ans++;
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>expr>>newb;
    solve();
}