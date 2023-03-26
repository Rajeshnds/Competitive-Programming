// #include<bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define vii vector<pair<int,int>>
// #define pi pair<int,int>
// #define ll long long
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// #define ff first
// #define ss second
// int main()
// {
//     ll n,q;
//     cin>>n>>q;
//     vector<ll>v(n);
//     rep(i,0,n)
//     cin>>v[i];
//     rep(i,0,q)
//     {
//         ll x,y,z;
//         cin>>x>>y>>z;
//         if(x==1)
//         {
//             v[y-1]=z;
//         }
//         else
//         {
          
//             ll st=0,end=LONG_LONG_MAX;
//             ll j=y-1;
//             while(st<=end && j<z-1)
//             {
//                 if(v[j]>v[j+1])
//                 {
//                     st=max(st,(ll)ceil(((double)v[j]+(double)v[j+1])/(double)2));
//                 }
//                 else if(v[j]<v[j+1])
//                 {
//                     end=min(end,(v[j]+v[j+1])/2);
//                 }
//                 j++;
//             }
//             if(st<=end)
//             cout<<st<<endl;
//             else cout<<-1<<endl;

//         }
//     }
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// # define ld long double
// const int N=2e5+5,mod=1e9+7;
// const ll inf=1e18;
// ll _T;
// ll n,m,x,y,k,a[N],q,t,l,r,b[N];
// ll ans=0,sum=0;
// ld ansd=0,sumd=0;
// string s;
// vector<ll>v;
// vector<vector<ll>>vv;
// vector<pair<ll,ll>>vp;
// pair<ll,ll>p[N];
// priority_queue<ll>pq;
// // queue<ll>q;
// set<ll>st;
// set<pair<ll,ll>>stp;
// set<vector<ll>>stv;
// map<ll,ll>mll;
// map<ll,vector<ll>>mlv;
// map<ll,pair<ll,ll>>mlp;
// map<pair<ll,ll>,ll>mpl;
// map<ll,map<ll,ll>>mm;
// void solve(){
//     ll c=0;
//     ll d=INT_MAX;
//     while(l<r&&c<=d){
//         if(a[l]>a[l+1]){
//             c=max(c,(a[l]+a[l+1]+1)/2);
//         }
//         else if(a[l]<a[l+1]){
//             d=min(d,(a[l]+a[l+1])/2);
//         }
//         l++;
//     }
//     if(c>d){
//         cout<<-1<<endl;
//     }
//     else cout<<c<<endl; 
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n>>q;
//     for(int i=1;i<=n;i++)cin>>a[i];
//     for(int i=1;i<=q;i++){
//         cin>>t>>l>>r;
//         if(t==1){
//             a[l]=r;
//         }
//         else {
//             solve();
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=2e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N],q,t,l,r;
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
// queue<ll>q;
set<ll>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
struct node{
    int first,last,g,h,ans;
};
node seg[N*4],neutral;
node merge(node a,node b){
    node c;
    if(a.last>b.first&&a.last!=mod){
        int d=(a.last+b.first+1)/2;
        c.g=max(a.g,max(b.g,d));
        c.h=min(a.h,b.h);
    }
    else if(a.last<b.first&&b.first!=mod){
        int d=(a.last+b.first)/2;
        c.h=min(a.h,min(b.h,d));
        c.g=max(a.g,b.g);
    }
    else{
        c.g=max(a.g,b.g);
        c.h=min(a.h,b.h);
    }
    if(c.g>c.h)c.ans=-1;
    else c.ans=c.g;
    c.first=a.first;
    c.last=b.last;
    return c;
}
void build(int i,int low,int high){
    if(low==high){
        seg[i].first=seg[i].last=a[low];
        seg[i].ans=seg[i].g=0;
        seg[i].h=mod;
        return;
    }
    int mid=(low+high)/2;
    build(i*2,low,mid);
    build(i*2+1,mid+1,high);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void update(int i,int low,int high,int pos,int value){
    if(pos>high||pos<low){
        return;
    }
    if(low==high&&pos==low){
        seg[i].first=seg[i].last=value;
        seg[i].ans=seg[i].g=0;
        seg[i].h=mod;
        return;
    }
    int mid=(low+high)/2;
    update(i*2,low,mid,pos,value);
    update(i*2+1,mid+1,high,pos,value);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
node query(int i,int low,int high,int l,int r){
    if(l>high||r<low){
        return neutral;
    }
    if(low>=l&&high<=r){
        return seg[i];
    }
    int mid=(low+high)/2;
    node left=query(i*2,low,mid,l,r);
    node right=query(i*2+1,mid+1,high,l,r);
    return merge(left,right);
}
void solve(){
    neutral.ans=neutral.g=0;
    neutral.h=mod;
    neutral.first=mod;
    neutral.last=mod;
    for(int i=1;i<=q;i++){
        cin>>t>>l>>r;
        if(t==1){
            update(1,1,n,l,r);
        }
        else{
            cout<<query(1,1,n,l,r).ans<<endl;
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
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    build(1,1,n);
    solve();
}