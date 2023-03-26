#include<bits/stdc++.h>
using namespace std;
int t,x,y,z,i,j;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>x>>y>>z;
       i=max(x,max(y,z));
       j=min(x,min(y,z));
       if(x+y+z-j==2*i)cout<<"YES"<<endl<<i<<" "<<j<<" "<<j;
       else cout<<"NO";
   }
}
