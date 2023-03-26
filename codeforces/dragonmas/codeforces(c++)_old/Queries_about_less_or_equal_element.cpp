#include<bits/stdc++.h>
using namespace std;
long long n,m,i,b;
main(){
cin>>n>>m;
long long a[n];
for(i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(i=0;i<m;i++){
    cin>>b;
    cout<<upper_bound(a,a+n,b)-a<<" ";
}
}
