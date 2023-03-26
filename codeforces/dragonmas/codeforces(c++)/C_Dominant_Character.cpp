#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n;
string s;
void solve(){
    if(s.find("aa")!=-1)cout<<2;
    else if(s.find("aba")!=-1)cout<<3;
    else if(s.find("aca")!=-1)cout<<3;
    else if(s.find("abca")!=-1)cout<<4;
    else if(s.find("acba")!=-1)cout<<4;
    else if(s.find("abbacca")!=-1)cout<<7;
    else if(s.find("accabba")!=-1)cout<<7;
    else cout<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}