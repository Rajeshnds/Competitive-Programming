#include<bits/stdc++.h>
using namespace std;
long long n,i,j,x,y,m;
main(){
cin>>n;
long long a[n];
for(i=0;i<n;i++)cin>>a[i];
i=0;j=n-1;
while(i<=j){
    if(x<y)x+=a[i++];
    else if(y<x)y+=a[j--];
    else m=x,x+=a[i++];
}
if(x==y)m=x;
cout<<m;
}
