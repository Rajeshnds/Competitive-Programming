#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const ll inf=1e18;
const int N=1e6+5,mod=1e9+7;
string s,t;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
void solve(){
    for(int i=0;i<n;i++)a[i]=inf;
    for(int i=n;i>=1;i--){
        s=to_string(i);
        for(char c:s){
            int k=c-'0';
            a[i-k]=min(a[i-k],a[i]+1);
        }
    }
    cout<<a[0];
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
    solve();
}