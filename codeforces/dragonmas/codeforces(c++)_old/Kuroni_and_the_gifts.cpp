#include<bits/stdc++.h>
using namespace std;
int t,n,a[1001],b[1001];
main(){
cin>>t;
while(t--){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);sort(b,b+n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
    for(int i=0;i<n;i++)cout<<b[i]<<" ";cout<<endl;
}
}
