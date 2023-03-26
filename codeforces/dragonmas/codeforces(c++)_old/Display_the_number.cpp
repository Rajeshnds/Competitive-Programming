#include<bits/stdc++.h>
using namespace std;
long long t,n;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n;
    if(n&1)cout<<7,n-=3;
    while(n)cout<<1,n-=2;
}
}
