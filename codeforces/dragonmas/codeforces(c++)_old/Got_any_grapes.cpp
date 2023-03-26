#include<bits/stdc++.h>
using namespace std;
int x,y,z,g,p,b;
main(){
cin>>x>>y>>z>>g>>p>>b;
cout<<((x<=g&&x+y<=p+g&&x+y+z<=b+g+p)?"YES":"NO");
}
