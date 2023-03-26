#include<bits/stdc++.h>
using namespace std;
long long q,n,a,b;
main(){
cin>>q;
while(q--)cin>>n>>a>>b,cout<<min(n/2*b+n%2*a,n*a)<<endl;
}
