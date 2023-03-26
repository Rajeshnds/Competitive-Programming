#include<bits/stdc++.h>
using namespace std;
int n,b,a,k,l,m;
main(){
for(cin>>n;n--;){
    cin>>a;
    if(a==b)m++;
    else k=m,m=1,b=a;
    l=max(l,min(k,m));
}
cout<<2*l;
}
