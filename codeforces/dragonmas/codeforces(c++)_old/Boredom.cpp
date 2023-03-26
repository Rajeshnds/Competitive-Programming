#include<bits/stdc++.h>
using namespace std;
long long n,a,b[100001],i;
main(){
    for(cin>>n;n--;)cin>>a,b[a]+=a;
    for(i=2;i<=100000;i++)b[i]=max(b[i-1],b[i]+b[i-2]);
    cout<<b[i-1];
}
