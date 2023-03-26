#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
long long a[300001],b[300001],s;
map<long long,bool>mp;
void solve(){
   for(int i=1;i<=n;i++)cin>>a[i],s+=a[i],a[i]+=a[i-1],mp[a[i]]=1;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        s-=b[i];
        b[i]+=b[i-1];
        if(mp[b[i]])ans++;
    }
    cout<<(s?-1:ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    solve();
}