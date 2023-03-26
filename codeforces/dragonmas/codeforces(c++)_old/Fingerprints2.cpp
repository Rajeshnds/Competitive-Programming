#include<bits/stdc++.h>
using namespace std;
int n,m,b,a[11],c[11];
main(){
cin>>n>>m;
for(int i=0;i<n;i++)cin>>a[i];
while(m--)cin>>b,c[b]=1;
for(int i=0;i<n;i++)if(c[a[i]])cout<<a[i]<<" ";
}
