#include<bits/stdc++.h>
using namespace std;
int a[4],m;
main(){
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a,a+4);
m=max(a[0]+a[1]-a[2],a[1]+a[2]-a[3]);
cout<<(m>0?"TRIANGLE":m?"IMPOSSIBLE":"SEGMENT");
}
