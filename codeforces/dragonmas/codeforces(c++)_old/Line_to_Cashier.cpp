#include<bits/stdc++.h>
using namespace std;
int n,m=INT_MAX,c,a;
main(){
cin>>n;
int k[n+1];
for(int i=1;i<=n;i++)cin>>k[i];
for(int i=1;i<=n;i++){
        c=0;
    while(k[i]--)cin>>a,c+=(a*5)+15;
m=min(m,c);
}
cout<<m;
}
