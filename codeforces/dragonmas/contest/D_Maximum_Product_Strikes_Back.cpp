#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N],c,d,e;
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
void calculate(int l,int r){
    k=0;
    e=0;
    for(int i=l;i<=r;i++){
        if(a[i]<0)k++;
    }
    if(k%2==0){
        for(int i=l;i<=r;i++){
            if(abs(a[i])==2)e++;
        }
        if(e>ans){
            ans=e;
            c=l;
            d=r;
        }
    }
    else{
        for(int i=l;i<=r;i++){
            if(a[i]<0){
                e=0;
                for(int j=i+1;j<=r;j++){
                    if(abs(a[j])==2)e++;
                }
                if(e>ans){
                    ans=e;
                    c=i+1;
                    d=r;
                }
                break; 
            }
        }
        for(int i=r;i>=l;i--){
            if(a[i]<0){
                e=0;
                for(int j=i-1;j>=l;j--){
                    if(abs(a[j])==2)e++;
                }
                if(e>ans){
                    ans=e;
                    c=l;
                    d=i-1;
                }
                break;
            }
        }
    }
}
void solve(){
    c=0;d=0;ans=-1;
    for(int i=0;i<v.size()-1;i++){
        calculate(v[i]+1,v[i+1]-1);
    }
    cout<<c-1<<" "<<n-d;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        v.clear();
        v.push_back(0);
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==0)v.push_back(i);
        }
        v.push_back(n+1);
        solve();
    }
}