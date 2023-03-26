#include<bits/stdc++.h>
using namespace std;
int t,n,p;
void solve(){
    int j=1,d=2*n+p;
    while(d>0){
        for(int i=j+1;i<=n;i++){
            if(d)cout<<j<<" "<<i<<endl,d--;
        }
        j++;
    }
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>p;
        solve();
    }
}