#include<bits/stdc++.h>
using namespace std;
int n,x,y,a;
main(){
for(cin>>n;n--;)cin>>x>>y,a=max(a,x+y);
cout<<a;
}
