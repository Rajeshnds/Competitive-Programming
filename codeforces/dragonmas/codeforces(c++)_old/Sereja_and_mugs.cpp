#include<bits/stdc++.h>
using namespace std;
int n,s,k;
main(){
cin>>n>>s;
int a[n];
for(int i=0;i<n;i++)cin>>a[i],k+=a[i];;
sort(a,a+n);
k-=a[n-1];
cout<<(k>=s?"YES":"NO");
}
