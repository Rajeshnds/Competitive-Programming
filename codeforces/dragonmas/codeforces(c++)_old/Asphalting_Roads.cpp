#include<bits/stdc++.h>
using namespace std;
int n,i=1,a,b,c[52],d[52];
main(){
    for(cin>>n;i<=n*n;i++){
        cin>>a>>b;
        if(!c[a]&&!d[b])cout<<i<<" ",c[a]=d[b]=1;
    }
}
