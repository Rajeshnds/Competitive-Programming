#include<bits/stdc++.h>
using namespace std;
int n,k,m,b[101],l,a,d;
main(){
cin>>n>>k;
while(n--)cin>>a,b[a]++,d=max(d,b[a]);
m=((d+k-1)/k)*k;
for(int i=1;i<101;i++)if(b[i])l+=m-b[i];
cout<<l;
}
