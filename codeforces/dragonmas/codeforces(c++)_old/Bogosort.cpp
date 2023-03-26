#include<bits/stdc++.h>
using namespace std;
int t,n,a[101],i;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(;i--;)cout<<a[i]<<endl;
    }
}
