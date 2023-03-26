#include<bits/stdc++.h>
using namespace std;
long long n,i;
main(){
cin>>n;
long long a[n+1]={0};
for(i=1;i<=n;i++)cin>>a[i];
cout<<a[2]-a[1]<<" "<<a[n]-a[1]<<endl;
for(i=2;i<=n-1;i++,cout<<endl)cout<<min(a[i]-a[i-1],a[i+1]-a[i])<<" "<<max(a[i]-a[1],a[n]-a[i]);
cout<<a[n]-a[n-1]<<" "<<a[n]-a[1];
}
