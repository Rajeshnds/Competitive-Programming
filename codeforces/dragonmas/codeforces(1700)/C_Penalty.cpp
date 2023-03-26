// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;
// ll _T;
// ll n,m,x,y,k,a[N];
// string s,t;
// vector<ll>v;
// set<ll>st;
// map<ll,ll>mp;
// pair<ll,ll>p[N];
// void solve(){
//     int ans=10;
//     for(int i=0;i<1024;i++){
//         v.clear();
//         for(int j=0;j<10;j++){
//             if(i&(1<<j)){
//                 v.push_back(j);
//             }
//         }
//         t=s;
//         int l=0;k=0;
//         for(auto j:v){
//             if(t[9-j]=='?')t[9-j]='1';
//         }
//         for(int j=0;j<10;j++){
//             if(j%2==0){
//                 if(t[j]=='1')k++;
//                 if(k>l+(10-j)/2||k+(9-j)/2<l){
//                     ans=min(ans,j+1);
//                     break;
//                 }
//             }
//             else{
//                 if(t[j]=='1')l++;
//                 if(l>k+(9-j)/2||l+(9-j)/2<k){
//                     ans=min(ans,j+1);
//                     break;
//                 }
//             }
//         }
//     }
//     cout<<ans;
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     for(cin>>_T;_T--;cout<<endl){
//         cin>>s;
//         solve();
//     }
// }


#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    int l=0,b=0,c=0;k=0;
    for(int i=0;i<10;i++){
        if(s[i]=='1'){
            if(i%2==0)k++;
            else l++;
        }
        else if(s[i]=='?'){
            if(i%2==0)b++;
            else c++;
        }
        if(k+b>l+(10-i)/2||l+c>k+(9-i)/2){
            cout<<i+1;
            return;
        }
    }
    cout<<10;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>s;
        solve();
    }
}