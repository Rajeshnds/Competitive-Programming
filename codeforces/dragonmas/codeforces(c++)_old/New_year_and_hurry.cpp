#include<bits/stdc++.h>
using namespace std;
int n,m,j,i;
main(){
cin>>n>>m;
m=240-m;
for(i=1;i<=n;i++){
    j+=5*i;
    if(j>=m)
        break;
}
cout<<(j==m?i:i-1);
return 0;
}
