#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N],l;
vector<ll>v1,v2;
string s,t;
void solve(){
    int k=l;
    while(k--){
        if(v1==v2){
            cout<<"YES";
            return;
        }
        for(int i=0;i<n;i++)v1[i]--;
        if(v1[0]<0){
            for(int i=1;i<n;i++)v1[i-1]=v1[i];
            v1[n-1]=l-1;
        }
    }
    cout<<"NO";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>l;
    v1.assign(n,0);
    v2.assign(n,0);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    solve();
}