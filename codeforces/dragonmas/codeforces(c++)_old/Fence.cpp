#include<bits/stdc++.h>
using namespace std;
int n,k;
main){
cin>>n>>k;
for(int i=1;i<=n;i++)cin>>a;
for(int i=1;i<=n-k+1;i++){
    for(int j=i;j<=k;j++){
        b[i]=b[i-1]+a[j];
    }
}
