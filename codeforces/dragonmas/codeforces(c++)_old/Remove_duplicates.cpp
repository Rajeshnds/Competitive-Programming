#include<bits/stdc++.h>
using namespace std;
int a[52],b[1002],k,n;
main(){
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(b[a[i]]==0)k++;
    b[a[i]]=i;
}
cout<<k<<endl;
for(int i=1;i<=n;i++)if(b[a[i]]==i)cout<<a[i]<<" ";
}
