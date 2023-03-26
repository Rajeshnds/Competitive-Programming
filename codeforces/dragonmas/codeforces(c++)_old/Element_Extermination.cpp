#include<bits/stdc++.h>
using namespace std;
int t,n;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<(a[n-1]>a[0]?"YES":"NO");
}
}
