#include<bits/stdc++.h>
using namespace std;
long long t,a,b,n,m;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>a>>b>>n>>m;
    if(a+b<n+m)cout<<"No";
    else if(a<=b&&(a<m||b+(a-m)<n))cout<<"No";
    else if(a>b&&(b<m||a+(b-m)<n))cout<<"No";
    else cout<<"Yes";
}
}
