#include<bits/stdc++.h>
using namespace std;
int t,n;
main(){
for(cin>>t;t--;){
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)cin>>a[i];
    sort(a,a+2*n);
    cout<<abs(a[n-1]-a[n])<<endl;
}
}
