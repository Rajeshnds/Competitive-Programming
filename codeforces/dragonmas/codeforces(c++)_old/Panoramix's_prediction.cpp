#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k;
main(){
cin>>n>>m;
for(i=n+1;i<=53;i++){
    for(j=2;j<=i/2;j++)
        if(i%j==0)break;
    if(j>i/2)break;
}
if(m==i)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}
