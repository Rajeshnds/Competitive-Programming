#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void solve(){
    int hmax=0;
    if(n&1){
        n--;
        k-=(m/2);
    }
    hmax=n*(m/2);
    if((k&1)||k>hmax||k<0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
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
        cin>>n>>m>>k;
        solve();
    }
}