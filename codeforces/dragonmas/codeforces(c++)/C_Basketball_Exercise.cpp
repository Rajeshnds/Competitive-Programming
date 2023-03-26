#include<bits/stdc++.h>
using namespace std;
long long n,s,t,a[100001],b[100001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=1;i<n;i++){
        a[i]=max(a[i-1],b[i-1]+a[i]);
        b[i]=max(b[i-1],a[i-1]+b[i]);
    }
    cout<<max(a[n-1],b[n-1]);
}