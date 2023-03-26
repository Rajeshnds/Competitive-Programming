#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=1e5+5;
int t,n,a[N],f;
map<int,int>m;
void solve(){
    if(n%2==0){cout<<"YES";return;}
    if(is_sorted(a+1,a+n+1)&&f==0)cout<<"NO";
    else cout<<"YES";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        m.clear();
        f=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]==2)f=1;
        }
        solve();
    }
}
