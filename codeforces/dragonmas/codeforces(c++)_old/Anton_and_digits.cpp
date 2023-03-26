#include<bits/stdc++.h>
using namespace std;
int k2,k3,k5,k6,l,i;
main(){
cin>>k2>>k3>>k5>>k6;
i=min(k2,min(k5,k6));
if(k2-i>0)l=min(k2-i,k3);
cout<<256*i+32*l;
return 0;
}
