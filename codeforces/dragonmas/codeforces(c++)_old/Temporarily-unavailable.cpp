#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,r,k;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>a>>b>>c>>r;if(a>b)swap(a,b);
    cout<<b-a-max(min(b,c+r)-max(a,c-r),0);
}
}
