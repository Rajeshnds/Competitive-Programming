#include<bits/stdc++.h>
using namespace std;
int a,b,j;
float i;
main(){
cin>>a>>b;
j=abs(a-b);
j%2==1?i=(j-1)/2:i=j/2;
cout<<2*(i/2)*(1+i)+(j%2==1?i+1:0);
}
