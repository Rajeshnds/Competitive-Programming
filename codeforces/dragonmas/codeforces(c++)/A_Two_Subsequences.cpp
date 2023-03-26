#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n;
string s;
void solve(){
    for(char c='a';c<='z';c++){
        if(s.find(c)!=-1){
            cout<<c<<" ";
            s.erase(s.find(c),1);
            cout<<s;
            break;
        }
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
        cin>>s;
        solve();
    }
}
