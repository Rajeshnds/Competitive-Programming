#include<bits/stdc++.h>
using namespace std;
int n,m,l,r,k,a;
main(){
    std::ios::sync_with_stdio(false);
cin>>n>>m;a=n;
while(a--)cin>>l,k+=(l==1);
k=min(k,n-k)*2;
while(m--){cin>>l>>r;cout<<((r-l)%2&&r-l<k)<<endl;}
}
