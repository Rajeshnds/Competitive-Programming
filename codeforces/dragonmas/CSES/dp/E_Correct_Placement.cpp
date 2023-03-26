#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2;
vector<vector<ll>>;
vector<pair<ll,ll>>v,v3;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    set<int>st;
    vector<pair<ll,ll>>v1;
    for(int i=0;i<n;i++){
        if(st.count(v[i].first)==0){
            v1.push_back(v[i]);
            st.insert(v[i].first);
        }
    }
    vector<int>v2;
    for(int i=0;i<v1.size();i++){
        x=upper_bound(v.begin(),v.end(),v1[i])-v.begin();
        if(k==v.size()){
            continue;
        }
        else{
            pair<ll,ll>p={v1[i].second,v1[i].first};
            y=upper_bound(v3.begin()+x,v3.end(),p)-v3.begin();
            if(y<v3.size()){
                v2.push_back(y);
            }
        }
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        v.assign(n,{});
        v3.assign(n,{});
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
            v[i]={a,b};
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            v3[i]={v[i].second,v[i].first}
        }
        solve();
    }
}