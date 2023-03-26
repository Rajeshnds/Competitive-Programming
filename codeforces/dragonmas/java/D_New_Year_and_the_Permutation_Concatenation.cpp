// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=1e6+5,mod=998244353;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,fact[N],i_fact[N];
// vector<vector<ll>>v;
// string s,t;
// ll inv_fact(ll a,ll m){
//     ll res=1;
//     while(m>0){
//         if(m%2==0){
//             a=(a*a)%mod;
//             m/=2;
//         }
//         else{
//             res=(res*a)%mod;
//             m--;
//         }
//     }
//     return res;
// }
// void solve(){
//     fact[0]=1;
//     for(int i=1;i<=n;i++){
//         fact[i]=(fact[i-1]*i)%mod;
//         i_fact[i]=inv_fact(fact[i],mod-2);
//     }
//     ans=n*fact[n]%mod;
//     for(int i=1;i<n;i++){
//         ans=(ans-(fact[n]*i_fact[i])%mod)%mod;
//     }
//     (ans+=mod)%=mod;
//     cout<<ans;
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n;
//     solve();
// }


#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void permute(int l,int r,string s){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=r;i++){
        swap(s[i],s[l]);
        permute(l+1,r,s);
        swap(s[i],s[l]);
    }
}
void solve(string s){
    int n=s.size();
    permute(0,n-1,s);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    // cout<<"Enter a strign to get it's all permutation: ";
    string s;
    cin>>s;
    solve(s);
}