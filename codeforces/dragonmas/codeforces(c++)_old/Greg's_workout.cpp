#include<bits/stdc++.h>
using namespace std;
int n,a[21],k,l,m;
main(){
    cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i+=3)k+=a[i];
for(int i=1;i<n;i+=3)l+=a[i];
for(int i=2;i<n;i+=3)m+=a[i];
int j=max(k,max(l,m));
cout<<(j==k?"chest":(j==l?"biceps":"back"));
}
