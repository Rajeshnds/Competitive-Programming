#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N];
vector<int>v;
set<int>st;
multiset<int>s;
void solve(){
    for(int i=1;i<=n;i++){
        cin>>k;
        auto it1=st.upper_bound(k);
        y=*it1;
        m=*(--it1);
        auto it2=s.find(y-m);
        if(i>1)s.erase(it2);
        s.insert(y-k);
        s.insert(k-m);
        auto it3=s.end();
        it3--;
        v.push_back(*(it3));
        st.insert(k);
    }
    for(auto i:v)cout<<i<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>x>>n;
    st.insert(0);
    st.insert(x);
    solve();
}