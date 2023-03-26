#include<bits/stdc++.h>
using namespace std;
float m,k,p,q;
int n,i,l;
main(){
cin>>n>>l;
int a[n+1];
for(i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
if(a[1]!=0)p=2*a[1];
if(a[n]!=l)q=2*(a[n]-a[n-1]);
for(i=2;i<=n;i++)k=a[i]-a[i-1],m=max(m,k);
m=max(m,max(p,q));
printf("%.81f",m/2);
}
