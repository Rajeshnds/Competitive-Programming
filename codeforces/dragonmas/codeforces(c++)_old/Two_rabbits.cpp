#include<bits/stdc++.h>
using namespace std;
int t,x,y,a,b;
main(){
for(cin>>t;t--;cout<<((y-x)%(a+b)?-1:(y-x)/(a+b))<<endl)cin>>x>>y>>a>>b;
}
