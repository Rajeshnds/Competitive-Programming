#include<bits/stdc++.h>
using namespace std;
int q,n,a,b[200001],j,s,m;
void solve(){
    fill(b,b+n+1,0);
    s=0;
    for(int i=0;i<n;i++)cin>>a,b[a]++;
    sort(b,b+n+1);
    m=b[n];
    for(int i=n;b[i]&&m;i--,m--){
        m=min(b[i],m);
        s+=m;
    }
    cout<<s<<endl;
}
int main(){
    for(cin>>q;q--;){
        cin>>n;
        solve();
    }
}