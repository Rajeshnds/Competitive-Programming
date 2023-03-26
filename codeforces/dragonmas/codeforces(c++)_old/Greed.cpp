#include<bits/stdc++.h>
using namespace std;
int n,s,a,i;
main(){
for(cin>>n;i<n;i++)cin>>a,s+=a;
int b[n];
for(i=0;i<n;i++)cin>>b[i];
sort(b,b+n);
cout<<(b[n-1]+b[n-2]>=s?"YES":"NO");
}
