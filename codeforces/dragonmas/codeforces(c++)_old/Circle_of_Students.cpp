#include<bits/stdc++.h>
using namespace std;
int q,n,k,a,b;
main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>a;k=1;
        for(int i=1;i<n;i++){
            cin>>b;
            if(abs(b-a)!=1&&abs(b-a)!=n-1)k=0;a=b;
        }
        cout<<(k?"YES":"NO");
    }
}
