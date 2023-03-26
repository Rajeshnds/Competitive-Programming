#include<bits/stdc++.h>
using namespace std;
int t,n,c;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;int a[n+2],b[n+2];cin>>a[0];
        for(int i=1;i<n;i++)cin>>a[i],b[i]=a[i]+a[i-1];
        sort(b+1,b+n);
        c=a[1];cout<<c<<" ";
        for(int i=1;i<n;i++){
            cout<<b[i]-c<<" ";
            c=b[i]-c;
        }
    }
}
