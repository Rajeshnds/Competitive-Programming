#include<bits/stdc++.h>
using namespace std;
int t,n,a,k,l;
main(){
for(cin>>t;t--;cout<<endl){
      cin>>n;k=0;l=0;
      while(n--){
        cin>>a;
        a%2==0?k=1:l=1;
      }
      cout<<(k==l?"NO":"YES");
}
}
