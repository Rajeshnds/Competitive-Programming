#include<bits/stdc++.h>
using namespace std;
int n,k;
main(){
cin>>n>>k;
if(k>n)cout<<-1;
else{
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
reverse(a+1,a+n+1);
cout<<a[k]<<" "<<0;
}
}
