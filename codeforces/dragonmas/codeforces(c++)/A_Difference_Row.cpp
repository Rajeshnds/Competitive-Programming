#include<bits/stdc++.h>
using namespace std;
int n,a[101];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    swap(a[0],a[n-1]);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}