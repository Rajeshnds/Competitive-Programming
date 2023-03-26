#include<bits/stdc++.h>
using namespace std;
int n,c,k,p,q;
main(){
cin>>n>>c;
int v[n],b[n];
for(int i=0;i<n;i++)cin>>v[i];
for(int i=0;i<n;i++)cin>>b[i];
for(int i=0;i<n;i++)p+=b[i],k+=max(0,v[i]-c*p);
for(int i=n-1;i>=0;i--)q+=b[i],k-=max(0,v[i]-c*q);
cout<<(k>0?"Limak":k==0?"Tie":"Radewoosh");
}
