#include<bits/stdc++.h>
using namespace std;
int n,m,b,a[11],k,c[11];
main(){
cin>>n>>m;
for(int i=0;i<n;i++)cin>>a[i];
while(m--){
        cin>>b;
   for(int i=0;i<n;i++){
    if(b==a[i])c[k++]=i;
   }
}
sort(c,c+k);
for(int i=0;i<k;i++)cout<<a[c[i]]<<" ";
}
