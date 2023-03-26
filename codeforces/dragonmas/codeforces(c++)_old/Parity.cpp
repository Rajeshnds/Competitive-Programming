#include<bits/stdc++.h>
using namespace std;
int b,k,a,n;
main(){
cin>>b>>k;
while(k--){
    cin>>a;
    n+=(b*a);
}
n+=(a&1);
cout<<(n%2?"odd":"even");
}
