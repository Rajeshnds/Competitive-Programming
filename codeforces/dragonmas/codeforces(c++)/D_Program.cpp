#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,m,a[N],b[3][N],c[3][N];
string s;
void solve(){
    int l,r,k;
    fill(a,a+n+1,0);
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+(s[i-1]=='+'?1:-1);
        b[1][i]=min(b[1][i-1],a[i]);
        b[2][i]=max(b[2][i-1],a[i]);
    }
    c[1][n+1]=a[n];
    c[2][n+1]=a[n];
    for(int i=n;i>=1;i--){
        c[1][i]=min(c[1][i+1],a[i]);
        c[2][i]=max(c[2][i+1],a[i]);
    }
    for(int i=1;i<=m;i++){
        cin>>l>>r;
        k=a[r]-a[l-1];
        cout<<max(b[2][l-1],c[2][r+1]-k)-min(b[1][l-1],c[1][r+1]-k)+1<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;){
        cin>>n>>m>>s;
        solve();
    }
}
