#include<bits/stdc++.h>
using namespace std;
int n,k,m,s,i,a[102];
main(){
cin>>n>>k;
for(i=0;i<n;i++)cin>>a[i],m==0&&a[i]<=k?s++:m=1;
if(s<n)for(i=n-1;a[i]<=k;i--)s++;
cout<<s;
}
