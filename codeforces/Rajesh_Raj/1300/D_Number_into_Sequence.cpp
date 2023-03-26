#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n;
void solve(){
    int count=1,divider=0;
    ll last=n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            int temp=0;
            while(n%i==0){
                temp++;
                n/=i;
            }
            if(temp>count)count=temp,divider=i;
        }
    }
    cout<<count<<endl;
    count--;
    while(count--)cout<<divider<<" ",last/=divider;
    cout<<last;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        solve();
    }
}