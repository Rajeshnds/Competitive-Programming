#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
int a[n],b[n],c[n];
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++)cin>>b[i];
for(int i=1;i<=n;i++)c[a[i]]=b[i];
for(int i=1;i<=n;i++)cout<<c[i]<<" ";
}
