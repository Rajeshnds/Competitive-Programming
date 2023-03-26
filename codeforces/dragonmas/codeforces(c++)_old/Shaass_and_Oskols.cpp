#include<bits/stdc++.h>
using namespace std;
int n,a[107],m,x,y,i=1;
main(){
for(cin>>n;i<=n;i++)cin>>a[i];
cin>>m;
while(m--){
    cin>>x>>y;
    a[x-1]+=(y-1);
    a[x+1]+=a[x]-y;
    a[x]=0;
}
for(i=1;i<=n;i++)cout<<a[i]<<endl;
}
