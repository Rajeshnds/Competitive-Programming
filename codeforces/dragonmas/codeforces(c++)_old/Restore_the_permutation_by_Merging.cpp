#include<bits/stdc++.h>
using namespace std;
int t,n,j,c[55],b;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n;n*=2;j=0;int d[55]={0};
    while(n--){
        cin>>b;
        if(d[b]==0)c[j++]=b,d[b]=1;
    }
    for(int i=0;i<j;i++)cout<<c[i]<<" ";
}
}
