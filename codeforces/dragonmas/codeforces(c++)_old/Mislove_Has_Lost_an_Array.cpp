#include<bits/stdc++.h>
using namespace std;
int n,l,r,i,k;
main(){
cin>>n>>l>>r;
for(i=1;i<=pow(2,l-1);i*=2)k+=i;cout<<k+n-l<<" ";k=0;
for(i=1;i<=pow(2,r-1);i*=2)k+=i;cout<<k+((n-r)*i/2);
}
