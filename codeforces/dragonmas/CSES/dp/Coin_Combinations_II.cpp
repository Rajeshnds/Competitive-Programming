#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=1e6+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
void solve(){
    b[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j-a[i]>=0){
                b[j]+=b[j-a[i]];
                b[j]%=mod;
            }
        }
    }
    cout<<b[x];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    solve();
}