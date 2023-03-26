#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],q;
string s,t;
vector<vector<int>>v;
set<int>st,st1,st2;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    if(x==1){
        st.insert(y);
        st1.insert(y);
    }
    else if(x==2){
        while(y--){
            for(auto i:st1){
                for(auto j:v[i])st2.insert(j);
            }
            st1.clear();
            for(auto i:st2){
                st.insert(i);
                st1.insert(i);
            }
            st2.clear();
        }
    }
    else{
        if(st.count(y))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m>>q;
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=q;i++){
        cin>>x>>y;
        solve();
    }
}