#include<bits/stdc++.h>
using namespace std;
int n,m,k,t,a;
main(){
cin>>n>>m>>k;t=n;
while(n--){
    cin>>a;
    if(a==1&&m>0)m--,t--;
    else if(a==2&&k>0)k--,t--;
    else if(a==2&&m>0)m--,t--;
}
cout<<t;
}
