#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(ll j){

}
void read_file(){
    freopen("balls.in","r",stdin);
    freopen("balls.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    ll i=1;
    for(int i=1;i<=300000;i++)dp[i]=300000;
    while(true){
        k=k+(i*(i+1)/2);
        v.push_back(k);
        dp[k]=1;
        // st.insert(k);
        if(k>300000)break;
        i++;
    }
    for(int i=1;i<=300000;i++){
        for(int j=0;j<v.size();j++){
            if(v[j]<=i){
                dp[i]=min(dp[i],dp[v[j]]+dp[i-v[j]]);
            }
        }
    }
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        cout<<dp[n];
    }
}