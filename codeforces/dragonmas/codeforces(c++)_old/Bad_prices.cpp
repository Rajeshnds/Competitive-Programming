#include<bits/stdc++.h>
using namespace std;
int t,n,a[150001],b,k;
main(){
for(cin>>t;t--;){
    cin>>n;k=0;
for(int i=0;i<n;i++)cin>>a[i];b=a[n-1];
for(int i=n-2;i>=0;i--){
    if(a[i]>b)k++;
    else b=a[i];
}
    cout<<k<<endl;
}
}
