#include<bits/stdc++.h>
using namespace std;
int y,b,r;
main(){
cin>>y>>b>>r;
cout<<min(y+2,min(b+1,r))*3-3;
}
