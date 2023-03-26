#include<bits/stdc++.h>
using namespace std;
int n,a,b,k,l,t;
main(){
for(cin>>n,t=n;n--;){
    cin>>a>>b;
    k+=a;
    l+=b;
}
cout<<min(k,t-k)+min(l,t-l);
}
