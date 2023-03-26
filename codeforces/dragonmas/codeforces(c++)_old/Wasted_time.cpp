#include<bits/stdc++.h>
using namespace std;
double i,m,n,k,a,b,s,t;
main(){
cin>>n>>k>>a>>b;n--;
while(n--){
    cin>>s>>t;
    m+=sqrt((s-a)*(s-a)+(t-b)*(t-b));
    a=s;b=t;
}
i=(k*m)/50;
printf("%.81f",i);
}
