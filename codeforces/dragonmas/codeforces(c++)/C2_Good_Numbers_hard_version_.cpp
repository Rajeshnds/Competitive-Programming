#include<bits/stdc++.h>
using namespace std;
long long q,n,k,d;
void solve(){
    k=1;d=3;
    while(k<n)k+=d,d*=3;
    while(d){
        if(k-d>=n)k-=d;
        d/=3;
    }
    cout<<k;
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n;
        solve();
    }
}