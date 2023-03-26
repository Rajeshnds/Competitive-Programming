#include<bits/stdc++.h>
using namespace std;
int n,b,d,a,k,l;
main(){
cin>>n>>b>>d;
while(n--){
    cin>>a;
    if(a<=b)k+=a;
    if(k>d)l++,k=0;
}
cout<<l;
}
