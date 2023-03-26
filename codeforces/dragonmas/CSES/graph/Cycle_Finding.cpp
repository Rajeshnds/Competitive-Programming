#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
string s,t;
vector<tuple<ll,ll,ll>>nodes;
vector<int>v;
void solve(){
    int l=-1;
    vector<ll>dis(n+1,inf),v(n+1,0);
    dis[1]=0;
    for(int i=1;i<=n;i++){
        for(auto j:nodes){
            ll x,y,c;
            tie(x,y,c)=j;
            if(dis[y]>dis[x]+c){
                dis[y]=dis[x]+c;
                v[y]=x;
                if(i==n){
                    l=y;
                }
            }
        }
    }
    if(l!=-1){
        for(int i=1;i<n;i++){
            l=v[l];
        }
        int i=l;
        vector<int>ans;
        ans.push_back(l);
        l=v[l];
        ans.push_back(l);
        while(ans.back()!=i){
            l=v[l];
            ans.push_back(l);
        }
        cout<<"YES"<<endl;
        while(ans.size()>0)cout<<ans.back()<<" ",ans.pop_back();
    }
    else{
        cout<<"NO";
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
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;ll c;
        cin>>a>>b>>c;
        nodes.push_back({a,b,c});
    }
    solve();
}