#include<bits/stdc++.h>
using namespace std;
int t,n,a[100001];
main(){
for(cin>>t;t--;){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=n;i>0;i--){
        if(i>=a[i]){cout<<i+1<<endl;break;}
        else{if(i==1)cout<<1<<endl;}
    }
}
}
