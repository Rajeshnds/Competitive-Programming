#include<bits/stdc++.h>
using namespace std;
int n,a,b,k;
main(){
cin>>n>>a>>b;
int l[n+1]={0};
while(a--)cin>>k,l[k]++;
for(int i=1;i<=n;i++){
    if(l[i]==1)cout<<1<<" ";
    else cout<<2<<" ";
}
}
