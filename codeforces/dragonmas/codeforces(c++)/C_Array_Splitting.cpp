#include<bits/stdc++.h>
using namespace std;
int n,k,a[300001],s,j;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)a[i]=a[i+1]-a[i];
    sort(a,a+n);
    for(int i=0;i<n-k;i++)s+=a[i];
    cout<<s;
}