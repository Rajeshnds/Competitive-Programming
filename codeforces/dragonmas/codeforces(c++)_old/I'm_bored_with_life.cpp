#include<bits/stdc++.h>
using namespace std;
long long n,m,k=1;
main(){
cin>>n>>m;
n=min(n,m);
for(int i=2;i<=n;i++)k*=i;cout<<k;
return 0;

}

