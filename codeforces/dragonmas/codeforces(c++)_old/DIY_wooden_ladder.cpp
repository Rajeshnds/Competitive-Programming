#include<bits/stdc++.h>
using namespace std;
int t,n;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    cout<<min(n-2,a[n-1]-1);
}
}
