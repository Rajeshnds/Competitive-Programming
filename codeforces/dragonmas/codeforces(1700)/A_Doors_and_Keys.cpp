#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    int r=1;
    for(int i=0;i<s.size();i++){
        if(s.find('r')>s.find('R'))r=0;
        if(s.find('g')>s.find('G'))r=0;
        if(s.find('b')>s.find('B'))r=0;
    }
    cout<<(r?"YES":"NO");
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