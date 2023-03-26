#include<bits/stdc++.h>
using namespace std;
int n,k,m,b;
main(){
cin>>n;
int a[2*n]={0};
for(int i=1;i<2*n;i++){
    cin>>b;
    a[b]++;
    if(a[b]==1)k++;
    if(a[b]==2)k--;
    m=max(m,k);
}
cout<<m;
}
