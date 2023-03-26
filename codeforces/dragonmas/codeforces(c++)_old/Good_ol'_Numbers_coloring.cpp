#include<bits/stdc++.h>
using namespace std;
int t,a,b;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        cout<<(__gcd(a,b)==1?"Finite":"Infinite");
    }
}
