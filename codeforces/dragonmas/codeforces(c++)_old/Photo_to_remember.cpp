#include<bits/stdc++.h>
using namespace std;
int n,c,m;
main(){
cin>>n;
int a[n],b[n],k[n];
for(int i=0;i<n;i++){
    cin>>a[i];cin>>b[i];
    c+=a[i];
    k[i]=b[i];
    m=max(m,b[i]);
}
sort(k,k+n);
for(int i=0;i<n;i++){
    m>b[i]?cout<<m*(c-a[i])<<" ":cout<<k[n-2]*(c-a[i])<<" ";
}
}
