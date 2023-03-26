#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],b[N],a1[N],b1[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    for(int i=1;i<=n;i++){
        if(a1[i]!=b1[i]){
            cout<<"No";
            return;
        }
    }
    for(int i=2;i<=n;i++){
        if(a1[i]==a1[i-1]){
            cout<<"Yes";
            return;
        }
    }
    int r=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j])r=r^1;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(b[i]>b[j])r^=1;
        }
    }
    cout<<(r?"No":"Yes");
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],a1[i]=a[i];
    for(int i=1;i<=n;i++)cin>>b[i],b1[i]=b[i];
    sort(a1+1,a1+n+1);
    sort(b1+1,b1+n+1);
    solve();
}