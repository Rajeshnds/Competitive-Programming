#include<bits/stdc++.h>
using namespace std;
int a,b,k,m;
main(){
cin>>a>>b>>k>>m;
int p[a],q[b];
for(int i=0;i<a;i++)cin>>p[i];
for(int i=0;i<b;i++)cin>>q[i];
sort(p,p+a);sort(q,q+b);
cout<<(p[k-1]<q[b-m]?"YES":"NO");
}
