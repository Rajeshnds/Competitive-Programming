#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,z,i,j,k;
main(){
cin>>a>>b>>x>>y>>z;
i=(2*x+y)-a;
j=(3*z+y)-b;
if(i>0)k+=i;
if(j>0)k+=j;
cout<<k;
}
