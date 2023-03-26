#include<bits/stdc++.h>
using namespace std;
long long n,s;
main(){
cin>>n;
long long a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
for(int i=0;i<n/2;i++)s+=(a[i+1]+a[n-i])*(a[i+1]+a[n-i]);
cout<<s;
}
