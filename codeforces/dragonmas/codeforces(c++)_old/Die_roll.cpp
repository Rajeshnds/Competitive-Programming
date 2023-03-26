#include<bits/stdc++.h>
using namespace std;
int n,m,i;
main(){
cin>>n>>m;
n=7-max(n,m);
m=__gcd(n,6);
cout<<n/m<<"/"<<6/m;
return 0;
}
