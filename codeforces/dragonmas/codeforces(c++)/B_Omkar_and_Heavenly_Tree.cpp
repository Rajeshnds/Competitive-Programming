#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,d[100005],m;
void solve(){
    int f=0;
    for(int i=1;i<=n;i++){
        if(d[i]==0){f=i;break;}
    }
    for(int i=1;i<=n;i++){
        if(i!=f)cout<<f<<" "<<i<<endl;
    }
}
int main(){
    fast;
    int a,b,c;
    for(cin>>t;t--;){
        cin>>n>>m;
        fill(d,d+n+1,0);
        for(int i=1;i<=m;i++){
            cin>>a>>b>>c;
            d[b]=1;
        }
        solve();
    }
}