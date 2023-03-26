#include<bits/stdc++.h>
using namespace std;
long long i,n,k,s;
main(){
cin>>n;
int a[n];
for(i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
for(i=1;i<=n;i++)i<=n/2?k+=a[i]:s+=a[i];
cout<<k*k+s*s;
}
