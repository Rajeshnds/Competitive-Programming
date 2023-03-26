#include<bits/stdc++.h>
using namespace std;
int a,b,k;
main(){
cin>>a>>b;
k=abs(a-b)-1;
if(a<b)cout<<a+k/2<<" "<<k%2<<" "<<7-b+k/2;
if(a>b)cout<<7-a+k/2<<" "<<k%2<<" "<<b+k/2;
if(a==b)cout<<0<<" "<<6<<" "<<0;
}
