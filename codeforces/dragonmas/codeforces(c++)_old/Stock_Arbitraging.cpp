#include<bits/stdc++.h>
using namespace std;
int n,m,r;
main(){
cin>>n>>m>>r;
int a[n],b[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<m;i++)cin>>b[i];
sort(b,b+m);
cout<<(a[0]>=b[m-1]?r:(r/a[0])*b[m-1]+(r%a[0]));
}
