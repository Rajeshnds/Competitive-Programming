#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,a,b,c;
void solve(){
    int k=0,l=0,m=0;
    if(a%2==1)k=1;
    if(b%2==1)l=2;
    if(c%2==1)m=3;
    if((k+l+m)%2==0)cout<<0;
    else cout<<1;
    // if(k+l+m==0||k+l+m==3)cout<<0;
    // else if(k==1&&l==1&&m==0))cout<<    
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>c;
        solve();
    }
}
