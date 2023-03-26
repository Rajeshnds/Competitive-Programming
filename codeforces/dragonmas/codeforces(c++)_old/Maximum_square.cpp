#include<bits/stdc++.h>
using namespace std;
int t,ans=1,a[1001]={0},i,n;
main(){
cin>>t;
while(t--){
        int ans=1;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
for(i=n;i>0;i--)
    if(a[i]>=(n-i+1))ans=1+n-i;
cout<<ans<<endl;
}
}
