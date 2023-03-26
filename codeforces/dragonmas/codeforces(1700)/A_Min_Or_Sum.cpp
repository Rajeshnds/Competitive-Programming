#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<ll>st;
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    ll a;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        st.clear();
        ll ans=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            bitset<31> b(a);
            string s=b.to_string();
            k=0;
            for(int j=s.size()-1;j>=0;j--){
                if(s[j]=='1')st.insert((1<<k));
                k++;
            }
        }
        for(auto k:st){
            ans+=k;
        }
        cout<<ans;
    }
}