#include<bits/stdc++.h>
using namespace std;
long long n,a,t;
main(){
cin>>n;
while(n--){
    cin>>a;t=0;
    while(a%2==0)a/=2,t++;
    while(a%3==0)a/=3,t+=2;
    while(a%5==0)a/=5,t+=3;
cout<<(a==1?t:-1)<<endl;
}
}
