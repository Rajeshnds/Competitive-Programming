#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
void solve(){
    int l=0;k=0;
    for(int i=0;i<s.size();i++){
        s[i]=='0'?k++:l++;
    }
    if(l==0||k==0)cout<<0;
    else if(k==l)cout<<k-1;
    else cout<<min(k,l);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>s;
        solve();
    }
}