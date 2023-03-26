#include<bits/stdc++.h>
using namespace std;
int n,m,k;
main(){
cin>>n>>m>>k;
int i=m*2;
int j=(k+i-1)/i;
cout<<j<<" ";
int d=m*2*(j-1)+1;
cout<<(k-d)/2+1<<" ";
cout<<(k&1?'L':'R');
}
