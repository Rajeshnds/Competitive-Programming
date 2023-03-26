#include<bits/stdc++.h>
using namespace std;
int n,k,a[2001],s;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i-=k)s+=2*(a[i]-1);
    cout<<s;
}