#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
main(){
cin>>a>>b>>c>>d;
int i=max((3*a)/10,a-c*(a/250)),j=max((3*b)/10,b-d*(a/250));
cout<<(i>j?"Misha":i==j?"Tie":"Vasya");
}
