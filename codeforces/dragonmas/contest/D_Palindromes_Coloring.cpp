#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    int ans=0,x=0;
    fill(a,a+30,0);
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        x+=(a[i]-(a[i]%2));
    }
    y=n-x;
    ans=x/(k*2);
    y+=(x%(k*2));
    ans*=2;
    cout<<ans+(y>=k);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k>>s;
        solve();
    }   
}