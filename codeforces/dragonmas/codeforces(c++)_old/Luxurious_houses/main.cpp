#include<bits/stdc++.h>
using namespace std;
int n,k,i;
int luxurious(int n){
    int a[n],b[n];
    for(i=0;i<n;i++)cin>>a[i];
    while(i--)k=max(k,a[i]),b[i]=k;
    for(int i=0;i<n;i++)cout<<(b[i]==b[i+1]?b[i]-a[i]+1:0)<<" ";
}
int main(){
    cin>>n;luxurious(n);
}
