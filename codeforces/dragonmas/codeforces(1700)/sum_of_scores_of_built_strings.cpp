#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
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
void solve(){
    int r=0,l=0;
    n=s.size();
    ll ans=n;
    k=0;
    for(int i=1;i<n;i++){
        if(i>r){
            r=l=i;
            while(r<n&&s[r-l]==s[r])r++;
            a[i]=r-l;
            r--;
        }
        else{
            if(a[i-l]<r-i+1){
                a[i]=a[i-l];
            }
            else{
                l=i;
                while(r<n&&s[r-l]==s[r])r++;
                a[i]=r-l;
                r--;
            }
        }
    }
    for(int i=1;i<n;i++)ans+=a[i];
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s;
    solve();
}