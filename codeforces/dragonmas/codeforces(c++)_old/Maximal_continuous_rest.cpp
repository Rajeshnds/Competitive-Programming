#include<bits/stdc++.h>
using namespace std;
int n,k,m;
main(){
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;a[i]!=0;i++)k++;
for(int i=n-1;a[i]!=0;i--)k++;
m=k;k=0;
for(int i=0;i<n;i++){
    if(a[i]==1)k++,m=max(m,k);
    else k=0;
}
cout<<m;
}
