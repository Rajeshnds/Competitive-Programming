#include<bits/stdc++.h>
using namespace std;
long long n,m,j=1,d,a,b;
main(){
cin>>n>>m;
long long c[n];c[0]=0;
for(int i=1;i<=n;i++)cin>>a>>b,c[i]=c[i-1]+(a*b);
for(int i=1;i<=m;i++){
    cin>>d;
    cout<<lower_bound(c+1,c+n+1,d)-c<<endl;
    }
}
