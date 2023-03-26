#include<bits/stdc++.h>
using namespace std;
int n,i;
main(){
    cin>>n;
    if(n==0)cout<<0<<" "<<0<<" "<<0;
    else if(n==1)cout<<0<<" "<<0<<" "<<1;
    else if(n==2)cout<<0<<" "<<1<<" "<<1;
    else if(n==3)cout<<1<<" "<<1<<" "<<1;
    else if(n==5)cout<<1<<" "<<2<<" "<<2;
    else{
int a[n];
a[0]=0;a[1]=1;a[2]=1;
for(i=3;a[i-1]<n;i++)a[i]=a[i-2]+a[i-1];
cout<<a[i-2]<<" "<<a[i-4]<<" "<<a[i-5];
}
}
