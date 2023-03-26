#include<bits/stdc++.h>
using namespace std;
int t,n,a,b,c,d;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n>>a>>b>>c>>d;
    int p=c-d,q=c+d;
    cout<<(n*(a+b)>=p&&n*(a-b)<=q?"YES":"NO");
}
}
