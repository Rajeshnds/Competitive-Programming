#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,s,a[N];
void solve(){
        k=n%7;
        int l=7-k;
        int d=n%10;
        if(d>=k){
            d-=k;
        }
        else if(d+l<=9)d+=l;
        string s=to_string(n);
        s[s.size()-1]=d+'0';
        n=stoi(s);
        cout<<n;
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
        solve();
    }
}