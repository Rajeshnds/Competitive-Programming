#include<bits/stdc++.h>
using namespace std;
char c,d;
int a[119],n;
main(){
cin>>c>>d>>n;
if(n%2==0)cout<<"undefined";
else{
a[118]=0;a[60]=1;a[94]=2;a[62]=3;
c=a[c];d=a[d];
cout<<((c+n)%4==d?"cw":"ccw");
}
}
