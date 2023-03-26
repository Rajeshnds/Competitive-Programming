#include<bits/stdc++.h>
using namespace std;
double a,b,n,k,t;
main(){
cin>>n>>k;t=n;
while(n--)cin>>a,b+=a;
n=t;
while(b/t<k-0.5)b+=k,t++;
cout<<t-n;
}
