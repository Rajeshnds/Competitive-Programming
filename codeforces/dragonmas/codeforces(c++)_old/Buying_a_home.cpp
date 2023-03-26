#include<bits/stdc++.h>
using namespace std;
int n,m,k,a,d;
main(){
cin>>n>>m>>k;
d=max(m,n-m);
for(int i=1;i<=n;i++){
    cin>>a;
    if(a<=k&&a!=0)d=min(d,abs(m-i));
}
cout<<d*10;
}
