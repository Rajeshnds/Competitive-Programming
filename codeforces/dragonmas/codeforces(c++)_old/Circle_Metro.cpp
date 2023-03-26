#include<bits/stdc++.h>
using namespace std;
int n,a,b,x,y;
main(){
cin>>n>>a>>b>>x>>y;
while(a!=b&&x!=y){
    a=a%n+1;
    x=(x-1)%n;
    if(x==0)x=n;
    if(a==x)return cout<<"YES",0;
}
cout<<"NO";
}
