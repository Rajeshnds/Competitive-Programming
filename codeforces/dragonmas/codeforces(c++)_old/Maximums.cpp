#include<bits/stdc++.h>
using namespace std;
int n,a,b;
main(){
for(cin>>n;n--;cout<<" "){
    cin>>a;
    cout<<a+b;
    b=max(b,a+b);
}
}
