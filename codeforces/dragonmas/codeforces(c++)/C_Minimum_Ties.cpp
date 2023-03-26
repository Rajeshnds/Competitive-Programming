#include<bits/stdc++.h>
using namespace std;
int t,n,k,d;
void solve(){
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++,cout<<" "){
            if((j-i)*2==n)cout<<0;
            else if((j-i)*2<n)cout<<1;
            else cout<<-1;
        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}