#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    k=n;
    int j=2,d=0,ans=0;
    for(int i=2;i*i<=n;i++){
        j=i;d=0;
        while(n%j==0)d++,n/=j;
        int e=1;
        while(d>=e)ans++,d-=e,e++;
    }
    if(n>1)ans++;
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    solve();
}