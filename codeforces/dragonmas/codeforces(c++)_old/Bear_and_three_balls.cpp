#include<bits/stdc++.h>
using namespace std;
int n,b[10001],a;
main(){
for(cin>>n;n--;)cin>>a,b[a]=1;
for(int i=1;i<=998;i++)
    if(b[i]&&b[i+1]&&b[i+2])return cout<<"YES",0;
cout<<"NO";
}
