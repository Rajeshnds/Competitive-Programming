#include<bits/stdc++.h>
using namespace std;
__int64 a,b,x,y,k;
main(){
    cin>>a>>b>>x>>y;
    k=__gcd(x,y);
    x/=k;y/=k;
    cout<<min(a/x,b/y);
}
