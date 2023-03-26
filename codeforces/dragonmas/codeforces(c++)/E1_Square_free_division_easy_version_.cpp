#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
int process(int n){
    for(int i=2;i*i<=n;i++){
        while(n%(i*i)==0)n/=(i*i);
    }
    return n;
}
void solve(){
    for(int i=0;i<n;i++){
        a[i]=process(a[i]);
    }
    set<int>s;
    int ans=1;
    for(int i=0;i<n;i++){
        if(s.count(a[i]))ans++,s.clear();
        s.insert(a[i]);
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
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}