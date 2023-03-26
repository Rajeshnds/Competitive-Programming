#include<bits/stdc++.h>
using namespace std;
long long t,n,a,s,me,mo,ans;
void solve(){
    s=0;mo=1e10;me=1e10,ans=1e18;
    for(int i=1;i<=n;i++){
        cin>>a;
        s+=a;
        if(i&1)mo=min(mo,a);
        else me=min(me,a);
        ans=min(ans,s+(n-(i+1)/2)*mo+(n-(i/2))*me);
    }
    cout<<ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}