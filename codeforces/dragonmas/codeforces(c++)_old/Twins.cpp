#include<bits/stdc++.h>
using namespace std;
int n,s,m;
main(){
cin>>n;
int a[n];
for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
sort(a+1,a+n+1);
for(int i=n;i>=1;i--){
    m+=a[i];
    if(m>s/2){cout<<n-i+1;return 0;}
}
}
