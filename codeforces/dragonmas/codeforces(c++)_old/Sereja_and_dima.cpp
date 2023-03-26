#include<bits/stdc++.h>
using namespace std;
int a[1001],n,k,i,j,c,p;
main(){
    cin>>n;
for(i=0;i<n;i++)cin>>a[i];
for(k=0;k<n;k++){
    if(j%2==0)c+=max(a[k],a[n-1]);
    if(j%2==1)p+=max(a[k],a[n-1]);
    if(a[k]<a[n-1])k--,n--;
    j++;
}
cout<<c<<" "<<p;
return 0;
}
