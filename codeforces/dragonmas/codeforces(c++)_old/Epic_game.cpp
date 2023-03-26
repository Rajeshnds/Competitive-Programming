#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,k,l,i;
main(){
cin>>a>>b>>c;
while(c>0){
    k=__gcd(a,c);
    if(c-k>=0)c-=k,i++;
    l=__gcd(b,c);
    if(c-l>=0)c-=l,i++;
}
cout<<(i%2==0?"1":"0");
return 0;
}
