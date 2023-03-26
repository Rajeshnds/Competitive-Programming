#include<bits/stdc++.h>
using namespace std;
int t,x,n,m;
main(){
for(cin>>t;t--;cout<<endl){
cin>>x>>n>>m;
while(x>20&&n--)x=(x/2)+10;
cout<<(x<=m*10?"YES":"NO");
}
}
