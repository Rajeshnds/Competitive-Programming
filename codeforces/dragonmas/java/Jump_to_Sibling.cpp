// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// # define ld long double
// const int N=2e5+5,mod=1e9+7;
// const ll inf=1e18;
// ll _T;
// ll n,m,x,y,k,a[N],b[N],l=0,c[N];
// ll ans=0,sum=0;
// ld ansd=0,sumd=0;
// string s,t;
// vector<ll>v;
// vector<vector<ll>>vv;
// vector<pair<ll,ll>>vp;
// pair<ll,ll>p[N];
// priority_queue<ll>pq;
// queue<ll>q;
// set<ll>st;
// set<pair<ll,ll>>stp;
// set<vector<ll>>stv;
// map<ll,ll>mll;
// map<ll,vector<ll>>mlv;
// map<ll,pair<ll,ll>>mlp;
// map<pair<ll,ll>,ll>mpl;
// map<ll,map<ll,ll>>mm;
// void solve(){
//     ans=0;
//     if(a[1]%2==a[n]%2){
//         for(int i=2;i<=n;i++){
//             if(a[i]%2==a[1]%2)ans++;
//         }
//         cout<<ans;
//     }
//     else{
//         ans=LLONG_MAX;
//         for(int i=1;i<=n;i++){
//             if(a[i]%2!=a[1]%2)b[i]=b[i-1]+1;
//             else b[i]=b[i-1];
//         }
//         ans=b[n];
//         x=0;
//         for(int i=2;i<=n;i++){
//             if(a[i]%2==a[1]%2){
//                 x++;
//                 ans=min(ans,x+b[n]-b[i]);
//             }
//         }
//         cout<<ans;
//     }
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     for(cin>>_T;_T--;cout<<endl){
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//         }
//         solve();
//     }
// }




#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N],l=0,c[N];
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
    ans=0;
    if(a[1]%2==a[n]%2){
        if(a[1]%2==0)cout<<l-1;
        else cout<<k-1;
    }
    // else if(a[1]%2==0&&k==1)cout<<1;
    // else if(a[1]%2==1&&l==1)cout<<1;
    else{
        ans=LLONG_MAX;
        b[1]=1;c[n]=1;
        for(int i=2;i<=n;i++){
            if(a[i]%2==a[1]%2)b[i]=b[i-1]+1;
            else b[i]=b[i-1];
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]%2!=a[1]%2)c[i]=c[i+1]+1;
            else c[i]=c[i+1];
        }
        for(int i=1;i<=n;i++){
            if(a[i]%2==a[1]%2)ans=min(ans,b[i]+c[i]);
        }
        cout<<ans-1;
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
        cin>>n;
        k=0;l=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2==1)k++;
            else l++;
        }
        solve();
    }
}