#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=n/b;j++){
            int k=n-(a*i)-(b*j);
            if(k>=0&&k%c==0){
                ans=max(ans,i+j+k/c);
            }
        }
    }
    cout<<ans;
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
    solve();
}