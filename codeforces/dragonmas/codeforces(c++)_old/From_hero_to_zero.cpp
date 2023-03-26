#include<bits/stdc++.h>
using namespace std;
long long t,n,k,a;
main(){
for(cin>>t;t--;cout<<endl){
cin>>n>>k;a=0;
while(n>0){a+=(n%k);n/=k;a++;}
cout<<a-1;
}
}
