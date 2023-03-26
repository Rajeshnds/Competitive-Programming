#include<bits/stdc++.h>
using namespace std;
int n,s,k;
main(){
cin>>n>>s;int a[n+1],b[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
if(a[1]==0)cout<<"NO";
else{
    for(int i=1;i<=n;i++){cin>>b[i];if(a[i]&&b[i])k=i;}
    for(int i=1;i<=k;i++)if(b[i])a[i]=b[i];
    cout<<(a[s]?"YES":"NO");
}
}
