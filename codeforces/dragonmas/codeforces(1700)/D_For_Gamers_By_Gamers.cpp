#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],c,d,h,total_money;
// ll unit[N];
string s,t;
vector<ll>unit;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    // auto it=upper_bound(unit.begin(),unit.end(),d*h);
    auto it=upper_bound(++unit.begin(),unit.end(),h*d);
    if(it==unit.end()){
        cout<<-1<<" ";
    }
    else{
        cout<<it-unit.begin()<<" ";
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
    cin>>n>>total_money;
    unit.resize(total_money+1,0);
    for(int i=1;i<=n;i++){
        cin>>c>>d>>h;
        unit[c]=max(unit[c],d*h);
    }
    for(int i=1;i<=total_money;i++){
        for(int j=2;i*j<=total_money;j++){
            unit[i*j]=max(unit[i*j],unit[i]*j);
        }
        // unit[i]=max(unit[i],unit[i-1]);
    }
    for(int i=2;i<=total_money;i++)unit[i]=max(unit[i-1],unit[i]);
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>d>>h;
        solve();
    }
}