#include<bits/stdc++.h>
using namespace std;
int n,m,k=1;
char s='a',c;
main(){
cin>>n>>m;
for(int i=1;i<=n;i++){
    cin>>c;
    if(c==s)k=0;
    s=c;
for(int j=1;j<=m-1;j++){
    cin>>c;
    if(c!=s)k=0;
}
}
cout<<(k?"YES":"NO");
}
