#include<bits/stdc++.h>
using namespace std;
long long n,x,k,b;
char a;
main(){
cin>>n>>x;
while(n--){
    cin>>a>>b;
if(a=='+')
x+=b;
else
    x-=b;
if(x<0)k++,x+=b;
}
cout<<x<<" "<<k;
}
