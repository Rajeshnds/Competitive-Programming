// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;
// ll _T;
// ll n,m,x,y,k,a,b;
// string s,t;
// vector<ll>v;
// set<ll>st;
// map<ll,ll>mp;
// pair<ll,ll>p[N];
// void solve(){
//     if(t.size()>s.size()){
//         sort(s.begin(),s.end());
//         reverse(s.begin(),s.end());
//         cout<<s;
//         return;
//     }
//     else{
//         string u="";
//         int i=0,j=0;
//         sort(s.begin(),s.end());
//         reverse(s.begin(),s.end());
//         while(s.size()>0){
//             i=0;
//             while(i<s.size()&&s[i]>t[j]){
//                 i++;
//             }
//             if(i==s.size()){
//                 while(true){
//                     j--;
//                     s=s+u[j];
//                     u.erase(j,1);
//                     sort(s.begin(),s.end());
//                     reverse(s.begin(),s.end());
//                     for(int i=0;i<s.size();i++){
//                         if(s[i]<t[j]){
//                             u+=s[i];
//                             s.erase(i,1);
//                             u+=s;
//                             cout<<u;
//                             return;
//                         }
//                     }
//                 }
//             }
//             u+=s[i];
//             if(s[i]<t[j]){
//                 s.erase(i,1);
//                 u+=s;
//                 break;
//             }
//             s.erase(i,1);
//             j++;
//         }
//         cout<<u;
//     }
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>a>>b;
//     s=to_string(a);
//     t=to_string(b);
//     solve();
// }


#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t,u;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            u=s;
            swap(u[i],u[j]);
            if(stoll(u)>stoll(s)&&stoll(u)<=stoll(t)){
                s=u;
            }
        }
    }
    cout<<s;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s>>t;
    solve();   
}