#include<bits/stdc++.h>
using namespace std;
long long n,a[100000];
main(){
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
if(a[i]+a[i+1]>a[i+2]&&i+3<=n){cout<<"YES";return 0;}
cout<<"NO";
}
