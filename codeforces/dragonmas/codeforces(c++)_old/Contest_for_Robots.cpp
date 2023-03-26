#include<bits/stdc++.h>
using namespace std;
int n,k,b,l;
main(){
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++){cin>>b;if(b!=a[i])k+=a[i],l+=b;}
cout<<(k==0||l==n?-1:l/k+1);
}
