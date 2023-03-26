#include<bits/stdc++.h>
using namespace std;
int t,n,k;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n>>k;
    for(int i=2;i<=n;i++)if(n%i==0){cout<<n+i+(2*(k-1));break;}
}
}
