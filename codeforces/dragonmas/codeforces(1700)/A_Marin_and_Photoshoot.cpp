#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    int ans=0;
    for(int i=0;i<n;i++){
        if(i+1<n&&s[i]=='0'&&s[i+1]=='0')ans+=2;
        else if(i+2<n&&s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')ans++;
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>s;
        // if(n==1&&s[0]=='0'){
        //     cout<<1;
        // }
         solve();
    }
}