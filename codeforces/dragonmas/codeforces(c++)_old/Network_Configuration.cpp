#include<bits/stdc++.h>
using namespace std;
int n,k;
main(){
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout<<a[n-k];
}
