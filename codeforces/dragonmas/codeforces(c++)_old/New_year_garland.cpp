#include<bits/stdc++.h>
using namespace std;
int t,r,g,b,k;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>r>>g>>b;
    k=r+g+b;
    b=max(b,max(r,g));
    r=k-b;
    cout<<(b<=r+1?"YES":"NO");
}
}
