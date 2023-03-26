#include<bits/stdc++.h>
using namespace std;
int n,s,t,k,l;
main(){
cin>>n;
int a[n];
for(int i=1;i<=n;i++)cin>>a[i],l+=a[i];
cin>>s>>t;if(s>t)swap(s,t);
for(int i=s;i<t;i++)k+=a[i];
cout<<min(k,l-k);
}
