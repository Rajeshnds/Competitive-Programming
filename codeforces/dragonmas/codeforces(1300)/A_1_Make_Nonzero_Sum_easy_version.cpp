#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    if(n&1){
        cout<<-1<<endl;
        return;
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i+=2){
        ans=a[i]-a[i+1];
        if(ans==0){
            v.push_back({i+1,i+2});
        }
        else{
            v.push_back({i+1,i+1});
            v.push_back({i+2,i+2});
        }
    }
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}