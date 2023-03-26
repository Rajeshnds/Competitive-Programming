#include<bits/stdc++.h>
using namespace std;
int n,a,b,k,v[101];
main(){
cin>>n;
for(int i=2;i<=n;i++)cin>>v[i];
cin>>a>>b;
for(int i=a+1;i<=b;i++)k+=v[i];
cout<<k;
}
