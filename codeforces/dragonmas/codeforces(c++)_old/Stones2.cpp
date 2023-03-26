#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,k;
main(){
for(cin>>n;n--;){cin>>a>>b>>c;k=3*min(b,c/2);b=b-k/3;k+=3*min(a,b/2);cout<<k<<endl;}
}
