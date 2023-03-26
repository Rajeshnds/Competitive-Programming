#include<bits/stdc++.h>
using namespace std;
int t,a,b,i,j;
main(){
for(cin>>t;t--;){cin>>a>>b;i=max(a,b);j=min(a,b);cout<<pow(max(i,2*j),2)<<endl;}
}
