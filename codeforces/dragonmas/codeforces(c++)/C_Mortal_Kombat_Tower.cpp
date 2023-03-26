#include<bits/stdc++.h>
using namespace std;
int t,n,a;
void solve(){
    int s=0,ans;
    cin>>ans;
    for(int i=1;i<n;i++){
        cin>>a;
        if(a)s++;
        else ans+=(s/3),s=0;
    }
    cout<<ans+s/3;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}