#include<bits/stdc++.h>
using namespace std;
int n,k,i=1,a,s;
main(){
for(cin>>n>>k;i<=n;i++){
    cin>>a;s+=a;
    k-=min(8,s);s-=min(8,s);
    if(k<=0){cout<<i;return 0;}
}
cout<<-1;
}
