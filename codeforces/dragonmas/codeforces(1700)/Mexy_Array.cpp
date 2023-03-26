#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],b[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    mp.clear();
    fill(b,b+n+1,-1);
    if(a[n]!=-1)mp[a[n]]=1;
    for(int i=n;i>1;i--){
        if(a[i-1]!=-1&&!mp[a[i-1]]){
            b[i]=a[i-1];
            mp[a[i-1]]=1;
        }
    }
    k=0;
    for(int i=1;i<=n;i++){
        if(b[i]==-1){
            while(mp[k])k++;
            b[i]=k++;
        }   
    }
    for(int i=1;i<=n;i++)cout<<b[i]<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        int r=1;
        k=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]!=-1){
                if(a[i]>i||k>a[i])r=0;
                k=max(k,a[i]);
            }
        }
        if(!r)cout<<-1;
        else solve();
    }
}