#include<bits/stdc++.h>
using namespace std;
int t,n;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        int i=(n+3)/4;
        for(int j=1;j<=n-i;j++)cout<<9;
        for(int j=1;j<=i;j++)cout<<8;
    }
}

