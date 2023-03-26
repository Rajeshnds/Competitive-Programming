#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k;
ll a[N];
set<ll> st;
vector<int>v[N];
string s;
void solve(){
    int j=0;
    ll ans=0;
    st.insert(0);
    for(int i=0;i<n;i++){
        for(;j<n;j++){
            if(st.count(a[j+1]))break;
            st.insert(a[j+1]);
        }
        ans+=(j-i);
        st.erase(a[i]);
    }
    // cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],a[i]+=a[i-1];
    solve();
}