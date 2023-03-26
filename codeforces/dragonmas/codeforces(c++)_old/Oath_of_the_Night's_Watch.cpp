#include<bits/stdc++.h>
using namespace std;
int n,k=0;
main(){
cin>>n;
int a[n];
int b[n+1]={0};
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)if(a[i]==a[0]||a[i]==a[n-1])k++;
cout<<n-k;
}
