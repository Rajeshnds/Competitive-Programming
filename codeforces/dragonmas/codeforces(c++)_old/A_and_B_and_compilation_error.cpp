#include<bits/stdc++.h>
using namespace std;
int n,m,a[3];
main(){
    cin>>n;
for(int i=0;i<3;i++)for(int j=0;j<n-i;j++)cin>>m,a[i]+=m;cout<<a[0]-a[1]<<endl<<a[1]-a[2];
}
