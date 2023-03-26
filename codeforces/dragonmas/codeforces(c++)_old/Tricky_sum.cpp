#include<bits/stdc++.h>
using namespace std;
long long i,t,n,k;
main(){
for(cin>>t;t--;){
    cin>>n;k=(n*(n+1))/2;
    for(i=1;i<=n;i*=2){
        k-=(2*i);
    }
    cout<<k<<endl;
}
}
