#include<bits/stdc++.h>
using namespace std;
int q,a,b,n,s;
main(){
    for(cin>>q;q--;cout<<endl){
        cin>>a>>b>>n>>s;
        cout<<(min(a,s/n)*n+b>=s?"YES":"NO");
    }
}
