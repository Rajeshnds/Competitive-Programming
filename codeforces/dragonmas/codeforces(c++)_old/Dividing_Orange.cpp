#include<bits/stdc++.h>
using namespace std;
int n,k,d,c,a[31],b[901];
main(){
cin>>n>>k;
for(int i=1;i<=k;i++)cin>>a[i],b[a[i]]=1;
for(int i=1;i<=k;i++,cout<<endl){
    cout<<a[i]<<" ";d=n;c=1;
    while(d>1){
        if(b[c]==0)cout<<c<<" ",b[c]=1,d--;
        c++;
    }
}
}
