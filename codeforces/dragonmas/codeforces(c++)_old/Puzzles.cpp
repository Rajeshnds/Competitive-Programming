#include<bits/stdc++.h>
using namespace std;
int n,m,k,j=1;
main(){
cin>>n>>m;
int a[m+1];
for(int i=1;i<=m;i++)cin>>a[i];
sort(a+1,a+m+1);
k=a[m];
for(int i=n;i<=m;i++){
    k=min(k,(a[i]-a[j]));
    j++;
}
cout<<k;
}
