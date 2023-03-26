#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N],l,r;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void solve(){
    if(l==r){
        if(l==1)cout<<"NO";
        else cout<<"YES";
    }
    else{
        m=(r-l+1)/2;
        if(l%2==1&&r%2==1)m++;
        // cout<<m<<" "<<k;
        if(k>=m)cout<<"YES";
        else cout<<"NO";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>l>>r>>k;
        solve();
    }   
}