#include<bits/stdc++.h>
using namespace std;
int t,n,a,k,l,d,f;
void solve(){
    if(d>2)d=2;
    cout<<d;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        k=1;d=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a!=i&&k)d++;
            k=(a==i);
        }
        solve();
    }
}