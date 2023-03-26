#include<bits/stdc++.h>
using namespace std;
float a1,a2,a3,b1,b2,b3,n;
main(){
cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
cout<<(ceil((a1+a2+a3)/5.0)+ceil((b1+b2+b3)/10.0)>n?"NO":"YES");
return 0;
}
