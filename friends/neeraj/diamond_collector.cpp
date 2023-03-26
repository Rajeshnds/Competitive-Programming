// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=50005,mod=1e9+7;
// int t,n,k,a[N],b[N],c[N];
// void left(){
//     int j=0;
//     b[0]=1;
//     for(int i=1;i<n;i++){
//         while(j<n&&a[i]-a[j]>k)j++;
//         b[i]=max(b[i-1],i-j+1);
//     }
// }
// void right(){
//     int j=n-1;
//     c[n-1]=1;
//     for(int i=n-2;i>=0;i--){
//         while(j>=0&&a[j]-a[i]>k)j--;
//         c[i]=max(c[i+1],j-i+1);
//     }
// }
// void solve(){
//     int ans=0;
//     left();
//     right();
//     for(int i=0;i<n-1;i++)ans=max(ans,b[i]+c[i+1]);
//     cout<<ans;
// }
// void read_file(){
//     freopen("diamond.in","r",stdin);
//     freopen("diamond.out","w",stdout);
// }
// int main(){
//     read_file();
//     fast;
//     cin>>n>>k;
//     for(int i=0;i<n;i++)cin>>a[i];
//     sort(a,a+n);
//     if(n<=2)cout<<n;
//     else solve();
// }


#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N],b[N],c[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void right(){
    c[n]=1;
    int j=n;
    for(int i=n-1;i>=1;i--){
        while(a[j]-a[i]>k)j--;
        c[i]=max(c[i+1],j-i+1);
    }
}
void left(){
    b[1]=1;
    int j=1;
    for(int i=2;i<=n;i++){
        while(a[i]-a[j]>k)j++;
        b[i]=max(b[i-1],i-j+1);
    }
}
void solve(){
    int ans=0;
    left();
    right();
    for(int i=1;i<n;i++){
        ans=max(ans,b[i]+c[i+1]);
    }
    cout<<ans;
}
void read_file(){
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        solve();
    // }   
}