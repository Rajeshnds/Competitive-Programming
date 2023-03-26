#include<bits/stdc++.h>
using namespace std;
int n,a[5002],q,j,t,u,b[5002],c[5002],d[5002];
main(){
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
if(a[i]==1)b[j++]=i;
if(a[i]==2)c[t++]=i;
if(a[i]==3)d[u++]=i;
}
q=min(min(j,t),u);
cout<<q<<endl;
for(int i=0;i<q;i++)
    cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
    return 0;
}
