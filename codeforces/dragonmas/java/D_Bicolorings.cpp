#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=998244353;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N];
vector<vector<ll>>v;
string s,t;
ll b[1001][4][2001];
void solve(){
    // memset(b,0,sizeof(b));
    // b[column no][the orientation(ww,wb,bw,bb)][no of component(1,2..k)]
    b[1][0][1]=1;
    b[1][1][1]=0;
    b[1][2][1]=0;
    b[1][3][1]=1;
    b[1][0][2]=0;
    b[1][1][2]=1;
    b[1][2][2]=1;
    b[1][3][2]=0;   
    for(int i=2;i<=n;i++){
        for(int l=1;l<=2*i;l++){
            b[i][0][l]=(b[i-1][0][l]+b[i-1][1][l]+b[i-1][2][l]+b[i-1][3][l-1])%mod;
            b[i][1][l]=(b[i-1][1][l]+b[i-1][0][l-1]+b[i-1][3][l-1]+(l-2>=0?b[i-1][2][l-2]:0))%mod;
            b[i][2][l]=(b[i-1][2][l]+b[i-1][0][l-1]+b[i-1][3][l-1]+(l-2>=0?b[i-1][1][l-2]:0))%mod;
            b[i][3][l]=(b[i-1][1][l]+b[i-1][2][l]+b[i-1][3][l]+b[i-1][0][l-1])%mod;
        }
    }
    cout<<(b[n][0][k]+b[n][1][k]+b[n][2][k]+b[n][3][k])%mod;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    solve();
}