#include<bits/stdc++.h>
using namespace std;
int n,a[1001],i;
main(){
for(cin>>n;i<n;i++)cin>>a[i];
sort(a,a+n);
cout<<a[(n-1)/2];
}
