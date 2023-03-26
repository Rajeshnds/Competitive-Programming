#include<bits/stdc++.h>
using namespace std;
int n,m,k;
main(){
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]>m)m=a[i],k=i;
}
sort(a+1,a+n+1);
cout<<k<<" "<<a[n-1];
}
