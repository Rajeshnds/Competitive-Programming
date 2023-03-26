#include<bits/stdc++.h>
using namespace std;
int n,l,j;
int main(){
    cin>>n;
    l=n;
    int k=n%4;
    if(k==1)j=2,cout<<1<<endl;
    else if(k==2)j=1,cout<<1<<endl;
    else if(k==3)j=2,cout<<0<<endl;
    else j=1,cout<<0<<endl;
    cout<<n/2<<" ";
    for(int i=1;i<=n/4;i++)cout<<j<<" "<<l<<" ",j+=2,l-=2;
    if(k==2||k==3)cout<<l;
}