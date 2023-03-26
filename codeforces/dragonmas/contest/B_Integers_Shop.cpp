// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;
// int _T;
// int n,m,x,y,k,a[N],mi,ma,l,r,c;
// ll ans;
// string s,t;
// vector<int>v;
// set<int>st;
// map<int,int>mp;
// pair<int,int>p[N];
// void solve(){
//     if(l<mi&&r>ma){
//         ans=c;
//         k=0;
//         x=0;
//     }
//     else if((l==mi&&r>ma)||(r==ma&&l<mi)){
//         ans=c;
//         k=0;
//         x=0;
//     }
//     else if(l<mi){
//         ans=ans-k+c;
//         k=c;
//     }
//     else if(r>ma){
//         ans=ans-x+c;
//         x=c;
//     }
//     else if(l==mi&&r==ma){
//         if(c<ans){
//             ans=c;
//             x=0;
//             k=0;
//         }
//     }
//     else if(l==mi){
//         if(c<k){
//             ans=ans-k+c;
//             k=c;
//         }
//     }
//     else if(r==ma){
//         if(c<x){
//             ans=ans-x+c;
//             x=c;
//         }
//     }
//     mi=min(mi,l);
//     ma=max(ma,r);
//     cout<<ans<<endl;
// }   
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     for(cin>>_T;_T--;){
//         cin>>n;
//         mi=INT_MAX;
//         ma=0;
//         x=0;
//         k=0;
//         ans=0;
//         for(int i=1;i<=n;i++){
//             cin>>l>>r>>c;
//             solve();
//         }
//     }   
// }


#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    
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
        for(int i=1;i<=n;i++){
            cin>>l>>r>>c;
            solve();
        }
    }   
}