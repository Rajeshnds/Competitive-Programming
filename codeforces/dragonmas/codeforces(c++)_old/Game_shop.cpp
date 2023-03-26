#include<bits/stdc++.h>
using namespace std;
int n,m,j=1,k=0;
main(){
cin>>n>>m;
int a[n],b[m];
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=m;i++)cin>>b[i];
for(int i=1;i<=n;i++){
    if(a[i]<=b[j]&&j<=m)k++,j++;
}
cout<<k;
}
