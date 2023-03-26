#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<pair<ll,ll>>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    v.clear();
    k=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'&&k%2==0){
            v.push_back({1,i+1});
            k++;
        }
        else if(s[i]=='0'&&k%2==1){
            v.push_back({1,i+1});
            k++;
        }
    }
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}   
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n>>s;
        solve();
    }
}