#include<bits/stdc++.h>
using namespace std;
int n,j;
main(){
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++){
    if(a[i]>=j+1)j++;
}
cout<<j;
}
