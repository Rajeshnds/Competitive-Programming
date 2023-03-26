#include<bits/stdc++.h>
using namespace std;
int n,d,k,m;
main(){
cin>>n>>d;
int a[n];
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++){
        k=0;
for(int j=1;j<=n;j++){
    if(abs(a[i]-a[j])<=d)k++;
}
    m+=k-1;
}
cout<<m;
}
