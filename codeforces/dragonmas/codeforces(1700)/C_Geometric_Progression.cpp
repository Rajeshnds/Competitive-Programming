#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
map<ll,int>mp1,mp2;
void solve(){
    long long ans=0;
    for(int i=1;i<=n;i++){
        mp2[a[i]]--;
        if(a[i]%k==0){
            ans=ans+(1ll*mp1[a[i]/k]*mp2[1ll*a[i]*k]);
        }
        mp1[a[i]]++;
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
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i],mp2[a[i]]++;
    solve();
}
