#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,m;
string s;
void solve(){
    int r=m;
    int l=1;
    int d=n;
    int u=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')r--;
        else if(s[i]=='D')d--;
        else if(s[i]=='L')l++;
        else u++;
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
        cin>>n>>m>>s;
        solve();
    }
}
