#include<bits/stdc++.h>
using namespace std;
int n,m,a[101],b[101];
main(){
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
cin>>m;
for(int i=0;i<m;i++)cin>>b[i];sort(b,b+m);
cout<<a[n-1]<<" "<<b[m-1];
}
