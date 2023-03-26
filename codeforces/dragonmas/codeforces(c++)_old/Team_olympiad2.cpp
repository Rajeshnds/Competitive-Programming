#include<bits/stdc++.h>
using namespace std;
int n,a[4][5002],b[4],c,d;
main(){
cin>>n;
for(int i=1;i<=n;i++){
    cin>>c;
    a[c][b[c]++]=i;
}
d=min(min(b[1],b[2]),b[3]);
cout<<d<<endl;
for(int i=0;i<d;i++)
    cout<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<endl;
return 0;
}
