#include<bits/stdc++.h>
using namespace std;
int n,k,x,a;
main(){
cin>>n>>k>>x;
n-=k;k*=x;
while(n--)cin>>a,k+=a;
cout<<k;
}
