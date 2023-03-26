#include<bits/stdc++.h>
using namespace std;
int n,k;
main(){
cin>>n;
int a[n];
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=2;i<=n-1;i++){
    if(a[i]>a[i-1]&&a[i]>a[i+1])k++;
    else if(a[i]<a[i-1]&&a[i]<a[i+1])k++;
}
cout<<k;
}
