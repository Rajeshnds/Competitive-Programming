#include<bits/stdc++.h>
using namespace std;
int n;
main(){
    cin>>n;
    int a[n];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n/2;i+=2)swap(a[i],a[n-i-1]);
for(auto i:a)cout<<i<<" ";
}
