#include<bits/stdc++.h>
using namespace std;
int n,v,a,b,c[56],j,i=1,k;
main(){
    for(cin>>n>>v;i<=n;i++){
        cin>>a;k=1;
        while(a--){
            cin>>b;
            if(b<v&&k)c[j++]=i,k=0;
        }
    }
    cout<<j<<endl;
    for(a=0;a<j;a++)cout<<c[a]<<" ";
}

