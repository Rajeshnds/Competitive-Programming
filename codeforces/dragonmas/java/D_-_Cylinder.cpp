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
    ll t,c,e=0,g,h,j;
    for(int i=1;i<=n;i++){
        cin>>t;
        if(t==1){
            cin>>x>>c;
            k+=c;
            v.push_back(k);
            mll[k]=x*c+e; 
            e=mll[k];
        }
        else{
            cin>>c; 
            y+=c; 
            auto it=lower_bound(v.begin(),v.end(),y);
            if(it==v.begin()){
                g=*it;
                j=(mll[g])/g;
                sum=j*y;
            }
            else if(*it==y){
                sum=mll[y];
            }
            else{
                g=*it;
                h=*(--it);
                j=(mll[g]-mll[h])/(g-h);
                sum=mll[h]+(y-h)*j;
            }
            cout<<sum-ans<<endl;
            ans=sum;
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    solve();
}