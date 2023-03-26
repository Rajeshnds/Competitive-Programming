#include<bits/stdc++.h>
using namespace std;
int n,k=2;
main(){
cin>>n;
for(int i=2;i<=n;i++){
    cout<<k<<" ";
    k+=i;
    if(k>n)k-=n;
}
}
