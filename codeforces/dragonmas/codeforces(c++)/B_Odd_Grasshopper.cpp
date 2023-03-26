#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t;
ll n,x;
void solve(){
    ll k=n%4;
    k=abs(k);
    if(x%2==0){
        if(k==3){
            cout<<x+(-(n-2))+n-1+n;
        }
        else if(k==2){
            cout<<x+(-(n-1))+n;
        }
        else if(k==1){
            cout<<x-n;
        }
        else cout<<x;
    }
    else{
        if(k==3){
            cout<<x+n-2+(-(n-1))+(-n);
        }
        else if(k==2){
            cout<<x+n-1+(-n);
        }
        else if(k==1){
            cout<<x+n;
        }
        else cout<<x;
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
        cin>>x>>n;
        solve();
    }
}
