#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,k,l;
void solve(){
    ll ans=1;
    for(int i=1;i<=k;i++)ans=ans*2;
    cout<<ans*l;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        k=0;l=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a==0)k++;
            else if(a==1)l++;
        }
        solve();
    }
}
