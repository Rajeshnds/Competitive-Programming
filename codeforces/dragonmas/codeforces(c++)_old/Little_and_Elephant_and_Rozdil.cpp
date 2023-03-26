#include<bits/stdc++.h>
using namespace std;
int n,k,l,m=INT_MAX,a;
main(){
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a;
    if(a==m)l=1;
    if(a<m)m=a,k=i,l=0;
}
if(l)cout<<"Still Rozdil";
else cout<<k;
}
