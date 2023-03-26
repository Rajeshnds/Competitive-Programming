#include<bits/stdc++.h>
using namespace std;
int n,l=INT_MAX,m;
main(){
cin>>n;
int a[n+1]={0};
for(int i=1;i<=n;i++)cin>>a[i],m=max(m,a[i]-a[i-1]);
    for(int i=3;i<=n;i++)l=min(l,a[i]-a[i-2]);
cout<<max(l,m);
}
