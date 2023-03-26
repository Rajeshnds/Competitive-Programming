#include<bits/stdc++.h>
using namespace std;
int n,k,a;
main(){
cin>>n;
int c[n]={0},d[n]={0};
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    cin>>a;
    c[i]+=a;
    d[j]+=a;
}
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    if(c[i]<d[j])k++;
}
cout<<k;
}
