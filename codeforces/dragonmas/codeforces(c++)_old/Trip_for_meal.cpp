#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,i;
main(){
cin>>n>>a>>b>>c;
i=min(a,min(b,c));
if(n==1)return cout<<0,0;
cout<<(i==a||i==b?i*(n-1):min(a,b)+c*(n-2));
}
