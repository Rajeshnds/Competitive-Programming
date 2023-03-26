#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],d;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    k=0;
    int r=0;
    while(x%d==0)x/=d,k++;
    if(k==1){
        cout<<"NO";
        return;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            cout<<"YES";
            return;
        }
    }
    for(int i=2;i*i<=d;i++){
        if(d%i==0)r=1;
    }
    if(r==0||k==2){
        cout<<"NO";
        return;
    }
    if(k==3&&x*x==d){
        cout<<"NO";
        return;
    }
    cout<<"YES";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>x>>d;
        solve();
    }   
}