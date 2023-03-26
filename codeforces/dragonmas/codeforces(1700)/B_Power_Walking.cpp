#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    k=st.size();
    for(int i=1;i<=n;i++){
        if(i<=k)cout<<k<<" ";
        else cout<<i<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int d;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        st.clear();
        for(int i=1;i<=n;i++){
            cin>>d;
            st.insert(d);
        }
        solve();
    }
}