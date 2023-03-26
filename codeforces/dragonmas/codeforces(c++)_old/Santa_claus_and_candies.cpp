#include<bits/stdc++.h>
using namespace std;
int n,k=1,i=1,j=1,l,a[21];
main(){
cin>>n;
l=(n+3)/2;
while(l--){
    a[k++]=i;a[k++]=j;
    i=i+j;
    j=j+i;
}
cout<<a[n+1];
}
