#include<bits/stdc++.h>
using namespace std;
int n,c,s,k,l;
main(){
    for(cin>>n;n--;cout<<endl){
        cin>>c>>s;
        k=s/c,l=s%c;cout<<k<<" "<<l;
        cout<<((k+1)*(k+1)*l)+(k*k*(n-l));
    }
}
