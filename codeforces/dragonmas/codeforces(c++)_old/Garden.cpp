#include<bits/stdc++.h>
using namespace std;
int n,k,m,a,i=1;
main(){
for(cin>>n>>k,m=k;i<=n;i++){cin>>a;k%a?0:m=min(m,k/a);}
cout<<m;
}
