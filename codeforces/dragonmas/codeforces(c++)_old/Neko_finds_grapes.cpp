#include<bits/stdc++.h>
using namespace std;
int n,m,a,k,l,i;
main(){
for(cin>>n>>m;i<n;i++)cin>>a,k+=a%2;
for(i=0;i<m;i++)cin>>a,l+=a%2;
cout<<min(n-k,l)+min(k,m-l);
}
