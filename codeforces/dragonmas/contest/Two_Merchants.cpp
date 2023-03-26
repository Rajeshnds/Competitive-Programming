#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N],c;
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v1,v2;
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
void solve(){
    int k=0,l=0;
    string can="NO";
    int i=1,j=1;
    while(true){
        v1.clear();
        v2.clear();
        int r=0;
        // for(;i<=n;i++){
        if(v1.back()<n){
            int d=lower_bound(a,a+n+1,c-k+l)-a;
            if(d>n||a[d]>c+k-l)d--;
            v1.push_back(d);
            if(v1.size()>1)k+=v1[v1.size()-1]-v1[v1.size()-2];
            else k=v1[0];
            if(v1.size()>1)if(v1[v1.size()-1]!=v1[v1.size()-2])r=1;
            else r=1;
            // if(a[i]+k-l<=c)r=1,i++,k++;
        }
        // for(;j<=m;j++){
        if(v2.back()<m){
            int d=lower_bound(b,b+n+1,c-l+k)-b;
            if(d>m||a[d]>c-l+k)d--;
            v2.push_back(d);
            if(v2.size()>1)l+=v2[v2.size()-1]-v2[v2.size()-2];
            else l=v2[0];
            if(v2.size()>1)if(v2[v2.size()-1]!=v2[v2.size()-2])r=1;
            else r=1;
            // if(b[j]+l-k<=c)r=1,j++,l++;
        }
        if(r==0){
            if(v1.back()==n+1&&v2.back()==m+1){
                can="YES";
            }
            break; 
        }
    }
    cout<<can;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m>>c;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=m;i++)cin>>b[i];
        solve();
    }
}