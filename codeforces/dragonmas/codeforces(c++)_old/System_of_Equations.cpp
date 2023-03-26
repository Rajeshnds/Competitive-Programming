#include<bits/stdc++.h>
using namespace std;
int n,m,k;
main(){
cin>>n>>m;
for(int a=0;a*a<=n;a++)
    for(int b=0;b*b<=m;b++)
    if(a*a+b==n&&a+b*b==m)
      k++;
cout<<k;
}
