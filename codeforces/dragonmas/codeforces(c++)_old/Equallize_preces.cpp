#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int q,n,k,ma,a,mi;
main(){
for(cin>>q;q--;cout<<endl){
    cin>>n>>k;ma=0;mi=INT_MAX;
    while(n--){cin>>a;ma=max(ma,a);mi=min(mi,a);}
    cout<<(abs(mi+k-ma)<=k?mi+k:-1);
}
}
