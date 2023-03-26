#include<bits/stdc++.h>
using namespace std;
int n,a,x,k,b,y;
main(){
cin>>n;
cin>>b;
x=b;
y=b;
for(int i=1;i<n;i++){
    cin>>a;
    if(a>x)k++,x=a;
    if(a<y)k++,y=a;
}
cout<<k;
}
