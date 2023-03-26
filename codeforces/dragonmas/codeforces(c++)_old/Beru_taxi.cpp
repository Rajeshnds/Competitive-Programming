#include<bits/stdc++.h>
using namespace std;
float m=1000,a,b,n,x,y,v;
main(){
cin>>a>>b>>n;
while(n--){
    cin>>x>>y>>v;
    m=min(hypot(x-a,y-b)/v,m);
}
printf("%.81f",m);
}
