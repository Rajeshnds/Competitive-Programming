#include<bits/stdc++.h>
using namespace std;
int t,n,m;
main(){
for(cin>>t;t--;){
    cin>>n>>m;
    if(n==1||m==1)cout<<(max(n,m)+1)/2<<endl;
    else cout<<(m%2==0?n*(m/2):(n*(m-1)/2)+(n+1)/2)<<endl;
}
}
