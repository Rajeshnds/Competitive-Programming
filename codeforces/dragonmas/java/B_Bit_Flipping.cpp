// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// # define ld long double
// const int N=2e5+5,mod=1e9+7;
// const ll inf=1e18;
// ll _T;
// ll n,m,x,y,k,a[N],b[N],one,zero;
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
// void calc(char c,int cnt){
//     for(int i=0;i<n;i++){
//         if(s[i]==c)a[i]++;
//     }
//     a[n-1]+=k-cnt;
// }
// void calc2(char c1,char c2,int l){
//     for(int i=0;i<n;i++){
//         if(k){
//             if(l){
//                 if(s[i]==c1)a[i]++,k--;
//                 else s[i]=c1;
//             }
//             else{
//                 if(s[i]==c1)a[i]++,s[i]=c2,k--;
//             }
//         }
//         else if(l){
//             if(s[i]==c1)s[i]=c2;
//             else s[i]=c1;
//         }
//     }
// }
// void solve(){
//     zero=0;one=0;
//     fill(a,a+n+1,0);
//     for(int i=0;i<n;i++){
//         if(s[i]=='1')one++;
//         else zero++;
//     }
//     if(k%2==1){
//         if(one%2==1){
//             if(k>=one){
//                 calc('1',one);
//                 s=string(n,'1');
//             }
//             else{
//                 calc2('1','0',1);
//             }
//         }
//         else{
//             if(k>one){
//                 calc('1',one);
//                 s=string(n-1,'1');
//                 s+='0';
//             }
//             else{
//                 calc2('1','0',1);
//             }
//         }
//     }
//     else{
//         if(zero%2==0){
//             if(k>=zero){
//                 calc('0',zero);
//                 s=string(n,'1');
//             }
//             else{
//                 calc2('0','1',0);
//             }
//         }
//         else{
//             if(k>zero){
//                 calc('0',zero);
//                 s=string(n-1,'1');
//                 s+='0';
//             }
//             else{
//                 calc2('0','1',0);
//             }
//         }
//     }
//     cout<<s<<endl;
//     for(int i=0;i<n;i++)cout<<a[i]<<" ";
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     for(cin>>_T;_T--;cout<<endl){
//         cin>>n>>k>>s;
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
    fill(b,b+n,0);
    if(k%2){
        for(int i=0;i<n;i++){
            if(s[i]=='0')s[i]='1';
            else s[i]='0';
        }
    }
    for(int i=0;i<n;i++){
        if(k>0&&s[i]=='0')s[i]='1',b[i]++,k--;
    }
    b[n-1]+=k;
    if(k%2){
        if(s[n-1]=='0')s[n-1]='1';
        else s[n-1]='0';
    }
    cout<<s<<endl;
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
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