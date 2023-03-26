#include<bits/stdc++.h>
using namespace std;
int n,l,a,t,d;
main(){
cin>>n;
int b[n]={0};
for(int i=1;i<=n;i++){
        t=n;d=0;
    while(t--){
        cin>>a;
        if(a!=1&&a!=3)d++;
        if(d==n)b[l++]=i;
    }
}
cout<<l<<endl;
for(int i=0;i<n;i++)if(b[i]>0)cout<<b[i]<<" ";
}
