#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// int n;
ll van,choc,vanp,chocp;
void solve(){
    cout<<(chocp>min(van,choc)||chocp+vanp>choc+van?"No":"Yes");
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>van>>choc>>vanp>>chocp;
        solve();
    }
}