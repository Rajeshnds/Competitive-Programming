#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,b[15],k;
void solve(){
    int j=0,i=1;
    ll q=0;
    k++;
    while(i+1<=n&&j<k){
        int d=(b[i+1]-1)/b[i];
        int m=min(d,k-j);
        q+=1ll*m*b[i];
        j+=m;
        i++;
    }
    q+=1ll*(k-j)*b[i];
    cout<<q;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a;
            int s=1;
            for(int i=1;i<=a;i++)s*=10;
            b[i]=s;
        }
        solve();
    }
}
