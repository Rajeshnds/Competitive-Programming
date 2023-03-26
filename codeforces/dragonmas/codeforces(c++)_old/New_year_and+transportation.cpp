#include<bits/stdc++.h>
using namespace std;
int n,t,i=1,a[30002];
main(){
    for(cin>>n>>t;i<n;i++)cin>>a[i];
    for(i=1;i<t;i=i+a[i]);
    cout<<(i==t?"YES":"NO");
}
