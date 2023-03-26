#include<bits/stdc++.h>
using namespace std;
int n,d,c,a,b,k;
main(){
cin>>n>>d>>a;n--;
while(n--){
    cin>>b;
    if(b<=a)k=(a-b)/d+1,c+=k,b=b+k*d;
    a=b;
}
cout<<c;
}
