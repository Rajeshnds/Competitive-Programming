#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[n-1]==1)a[n-1]=2;
    else a[n-1]=1;
    sort(a,a+n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}