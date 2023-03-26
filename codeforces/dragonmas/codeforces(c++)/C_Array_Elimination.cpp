#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=1000005;
int t,n,a[N],b[35];
void solve(){
    int gcd=0;
    for(int i=0;i<=30;i++){
        gcd=__gcd(gcd,b[i]);
    }
    for(int i=1;i<=n;i++){
        if(gcd%i==0)cout<<i<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        fill(b,b+35,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            for(int j=0;j<=30;j++){
                if((a[i]>>j)&1)b[j]++;
            }
        }
        solve();
    }
}
