#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
cout<<min(a[n-2]-a[0],a[n-1]-a[1]);
}
