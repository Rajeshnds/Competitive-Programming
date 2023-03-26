#include<bits/stdc++.h>
using namespace std;
long long t,x,y,n,i;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>x>>y>>n;
    i=n%x;
    if(i>=y)cout<<n-i+y;
    else cout<<n-i-x+y;
}
}
