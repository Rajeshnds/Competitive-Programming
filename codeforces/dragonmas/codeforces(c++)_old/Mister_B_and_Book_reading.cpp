#include<bits/stdc++.h>
using namespace std;
int c,u,v,a,l,m,d,i;
main(){
cin>>c>>u>>v>>a>>l;m=u;
for(i=1;m<c;i++)u+(i*a)<=v?m+=u+(i*a)-l:m+=v-l;
cout<<i;
}
