#include<bits/stdc++.h>
using namespace std;
int n,m,b[103],a;
main(){
cin>>n>>m;
while(m--){cin>>a;for(int j=a;j<=n;j++)if(b[j]==0)b[j]=a;}
for(int i=1;i<=n;i++)cout<<b[i]<<" ";
}
