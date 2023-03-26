#include<bits/stdc++.h>
using namespace std;
int x,y,z,t1,t2,t3;
main(){
cin>>x>>y>>z>>t1>>t2>>t3;
int i=abs(x-y)*t1;
int j=t2*(abs(x-y)+abs(x-z))+3*t3;
cout<<(j<=i?"YES":"NO");
}
