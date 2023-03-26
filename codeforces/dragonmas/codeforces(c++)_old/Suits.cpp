#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
main(){
cin>>a>>b>>c>>d>>e>>f;
e>=f?cout<<e*min(a,d)+f*min(b,min(c,d-min(a,d))):cout<<f*min(b,min(c,d))+e*min(a,d-min(b,min(c,d)));
}
