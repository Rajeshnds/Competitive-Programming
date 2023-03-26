#include<bits/stdc++.h>
using namespace std;
int t,a,b;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        a=abs(a-b);
        cout<<a/10+(a%10!=0);
    }
}

