#include<bits/stdc++.h>
using namespace std;
long long i,n;
main(){
cin>>n;
long long a[n];
for(i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(i=0;i<n;i++)cout<<a[i]<<" ";
}

