#include<bits/stdc++.h>
using namespace std;
long long t,a,b,c,d;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>a>>b>>c>>d;
    if(b>=a)cout<<b;
    else if(d>=c)cout<<-1;
    else
        cout<<b+(c*((a-b+c-d-1)/(c-d)));
}
}
