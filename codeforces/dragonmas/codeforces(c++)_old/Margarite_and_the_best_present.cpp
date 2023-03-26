#include<bits/stdc++.h>
using namespace std;
int q,l,r;
main(){
for(cin>>q;q--;cout<<endl){
    cin>>l>>r;
    if(l&1)cout<<(r-l+1)/2-(r&1?r:0);
    else cout<<l+(r-l)/2-(r&1?r:0);
}
}
