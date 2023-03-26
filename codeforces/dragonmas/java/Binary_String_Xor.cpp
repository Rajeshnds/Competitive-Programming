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
int proc(){
    int r=0;
    // cout<<s<<endl;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            i++;
            while(i<n&&s[i]!='1')i++;
            if(s[i]=='1')r++;
        }
        else r++;
    }
    if(r<k)return 1;
    else return 0;
}
void solve(){
    string ans="YES";
    x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')x++;
    }
    if(x%2==1){
        if(k%2==0){
            ans="NO";
        }
        else if(x<k)ans="NO";
    }
    else{
        if(k%2==1){
            // int r=0;
            // for(int i=0;i<n;i++){
            //     if(s[i]=='1'){
            //         i++;
            //         while(i<n&&s[i]!='1')i++;
            //         if(s[i]=='1')r++;
            //     }
            //     else r++;
            // }
            // if(r<k)ans="NO";
            if(proc())ans="NO";
        }
        else{
            if(x<k){
                if(proc())ans="NO";
            }
        }
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k>>s;
        solve();
    }
}