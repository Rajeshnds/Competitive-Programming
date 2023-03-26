#include<bits/stdc++.h>
using namespace std;
int t,n,l,r;
void solve(){
    int k=0;
    for(cin>>t;t--;cout<<endl){
        cin>>n;k=1;
        for(int i=1;i<=n;i++){
            cin>>l>>r;
            if(l>k)k=l;
            if(r>=k)cout<<k<<" ",k++;
            else cout<<0<<" ";
        }
    }
}
int main(){
    solve();
}
