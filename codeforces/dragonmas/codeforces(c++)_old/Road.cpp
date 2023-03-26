#include<bits/stdc++.h>
using namespace std;
long long t,x,y,a,b,p,q;
main(){
for(cin>>t;t--;){
    cin>>x>>y>>a>>b;
    p=b*min(x,y)+a*abs(x-y);
    q=a*(x+y);
    cout<<min(p,q)<<endl;
}
}
