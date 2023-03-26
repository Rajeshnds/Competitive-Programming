#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;
int t,n,k,a[N],m;
string s;
vector<int>v;
set<int>st;
void solve(){
    for(int i=1;i*i<=k;i++){
        if(k%i==0)a[i]++;
        if(i*i!=k)a[k/i]++;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        m=max(m,k);
        solve();
    }
    for(int i=m;i>=1;i--){
        if(a[i]>=2){
            cout<<i;
            return 0;
        }
    }
}


