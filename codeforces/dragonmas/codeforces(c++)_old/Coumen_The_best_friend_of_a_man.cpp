#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,d,t,m[501];
main(){
cin>>n>>k>>a;
t=a;
for(int i=1;i<n;i++){
    cin>>b;
    if(a+b<k){m[i]=k-a;d+=k-a-b;a=k-a;}else m[i]=b,a=b;
}
cout<<d<<endl<<t<<" ";
for(int i=1;i<n;i++)cout<<m[i]<<" ";
}
