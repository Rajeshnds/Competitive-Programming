#include<bits/stdc++.h>
using namespace std;
int l,r,a;
main(){
cin>>l>>r>>a;cout<<min((l+a)*2,min((r+a)*2,(l+r+a)/2*2));
}
