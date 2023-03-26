#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=1e3+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N][N],b[N];
ll ans=0,sum=0;
string s[N];
void solve(){
    if(s[0][0]!='*')a[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]!='*'){
                if(i-1>=0&&j-1>=0){
                    a[i][j]=(a[i-1][j]+a[i][j-1])%mod;
                }
                else if(i-1>=0){
                    a[i][j]=(a[i-1][j]);
                }
                else if(j-1>=0){
                    a[i][j]=(a[i][j-1]);
                }
            }
        }
    }
    cout<<a[n-1][n-1];
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
    for(int i=0;i<n;i++)cin>>s[i];
    solve();
}