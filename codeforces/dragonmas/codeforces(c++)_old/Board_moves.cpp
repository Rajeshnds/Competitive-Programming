#include<bits/stdc++.h>
using namespace std;
long long t,n,k,j=1;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;k=0;j=1;
        for(int i=3;i<=n;i+=2,j++)k+=j*(8*j);
        cout<<k;
    }
}

