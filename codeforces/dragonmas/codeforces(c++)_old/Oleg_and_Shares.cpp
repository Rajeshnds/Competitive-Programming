#include<bits/stdc++.h>
using namespace std;
long long n,k,d;
main(){
cin>>n>>k;int a[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=1;i<n;i++){
    if((a[i]-a[0])%k==0)d+=(a[i]-a[0])/k;
    else return cout<<-1,0;
}
cout<<d;
}
