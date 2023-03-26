#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int q,n,a[125];
string s,t;
void solve(){
    int ans=0;
    for(int i=0;i<t.size()-1;i++){
        ans+=abs(a[t[i]]-a[t[i+1]]);
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    read_file();
    fast;
    for(cin>>q;q--;cout<<endl){
        cin>>s>>t;
        for(int i=0;i<s.size();i++){
            a[s[i]]=i+1;
        }
        solve();
    }
}
