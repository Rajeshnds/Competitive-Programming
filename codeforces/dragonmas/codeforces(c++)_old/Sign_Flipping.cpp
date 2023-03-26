#include<bits/stdc++.h>
using namespace std;
int t,n,a;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n;int b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a;
        i&1?b[i]=-(abs(a)):b[i]=abs(a);
}
for(int i=1;i<=n;i++)cout<<b[i]<<" ";
}
}
