#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
map<pair<int,int>,int>mp;
void solve(){
    mp.clear();
    int d=0;k=0;
    for(char c:s){
        if(c=='D')d++;
        else k++;
        int g=__gcd(d,k);
        cout<<++mp[{d/g,k/g}]<<" ";
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
        cin>>n>>s;
        solve();
    }
}