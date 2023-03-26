#include<bits/stdc++.h>
using namespace std;
int n,c,k,m;
main(){
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++){
    c=1;
    k=a[i];
    while(k>0)k=a[k],c++;
    m=max(m,c);
}
cout<<m;
}
