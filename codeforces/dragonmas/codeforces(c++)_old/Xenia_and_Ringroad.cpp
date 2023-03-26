#include<bits/stdc++.h>
using namespace std;
long long n,m,x=1,b,c;
main(){
    for(cin>>n>>m;m--;)cin>>c,b+=(n+c-x)%n,x=c;
    cout<<b;
}
