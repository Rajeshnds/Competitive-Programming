#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void solve(){
    sum=k*(k-1)/2;
    sum++;
    if(sum<n){
        cout<<-1;
    }
    else if(n==1){
        cout<<0;
    }
    else if(n<=k){
        cout<<1;
    }
    else{
        ll l=1,r=k;
        while(l<r){
            ll mid=(l+r)/2;
            ll d=k-mid;
            x=d*(mid+k-1)/2;
            x++;
            if(n>x){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        cout<<k-l+1;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    solve();
}