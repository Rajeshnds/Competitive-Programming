#include<bits/stdc++.h>
using namespace std;
int n,k,j=1,a,b,l,c[101];
main(){
cin>>n>>a;
k=a;l=a;
c[0]=1;
for(int i=2;i<=n;i++){
    cin>>b;
    k+=b;
    if(a>=2*b)c[j++]=i,l+=b;
}
if(2*l>k){cout<<j<<endl;for(int i=0;i<j;i++)cout<<c[i]<<" ";}
else cout<<0;
}
