#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=1e6+5;
int t,n,m,q,a[N];
string s[N];
void solve(){
    int l,r;
    for(int i=1;i<=q;i++){
        cin>>l>>r;
        cout<<(a[r-1]-a[l-1]?"NO":"YES")<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(s[i][j-1]=='X'&&s[i-1][j]=='X')a[j]=1;
        }
    }
    for(int i=1;i<m;i++)a[i]+=a[i-1];
    cin>>q;
    solve();
}
