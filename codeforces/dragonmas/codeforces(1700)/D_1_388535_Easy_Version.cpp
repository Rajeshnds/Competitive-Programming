#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],l,r;
string s,t;
vector<ll>v1,v2;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    if(v1[0]!=0){
        if(v1[0]>r){
            cout<<v1[0];
        }
        else cout<<v1[r];
    }
    else{
        
    }
    for(int i=0;i<=r;i++){
        v2.clear();
        for(int j=0;j<=r;j++){
            v2.push_back(v1[i]^j);
        }
        sort(v2.begin(),v2.end());
        if(v1==v2){
            cout<<v1[i];
            return;
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>l>>r;
        v1.clear();
        for(int i=1;i<=r+1;i++){
            int d;
            cin>>d;
            v1.push_back(d);
        }
        sort(v1.begin(),v1.end());
        solve();
    }
}