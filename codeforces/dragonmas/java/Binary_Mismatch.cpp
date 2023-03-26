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
    if(n%2==1){
        cout<<"NO";
        return;
    }
    else{
        k=0;
        ll l=0;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='1')k++;
            else l++;
        }
        if(k==l){
            cout<<1<<" "<<n;
        }
        else if(k>l){
            int d=(n/2)-l;
            int i=0;
            while(d){
                if(s[i]=='1')d--;
                else d++;
                if(d>0)i++;
            }
            cout<<1<<" "<<i+1;
        }
        else{
            int d=(n/2)-k;
            int i=0;
            while(d){
                if(s[i]=='0')d--;
                else d++;
                if(d>0)i++;
            }
            cout<<1<<" "<<i+1;
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
        cin>>n>>s;
        solve();
    }
}