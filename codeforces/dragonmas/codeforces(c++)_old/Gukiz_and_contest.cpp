#include<bits/stdc++.h>
using namespace std;
int n,a[2002],k,b,i=1;
main(){
for(cin>>n;i<=n;i++)cin>>a[i];
for(i=1;i<=n;i++){k=1;for(b=1;b<=n;b++)if(a[i]<a[b])k++;cout<<k<<" ";}
}
