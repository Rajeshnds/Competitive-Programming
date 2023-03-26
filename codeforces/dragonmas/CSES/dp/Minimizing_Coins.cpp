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
    for(int i=1;i<=x;i++)b[i]=inf;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            if(a[j]<=i){
                b[i]=min(b[i],b[i-a[j]]+1);
            }
            else break;
        }
    }
    cout<<(b[x]==inf?-1:b[x]);
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