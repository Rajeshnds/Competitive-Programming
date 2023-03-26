#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
int i=sqrt(n);
cout<<__gcd(i,n)<<" "<<n/(__gcd(i,n));
}
