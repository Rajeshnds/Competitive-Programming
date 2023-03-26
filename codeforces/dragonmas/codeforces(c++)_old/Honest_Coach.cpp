#include<bits/stdc++.h>
using namespace std;
int t,n,m;
main(){
for(cin>>t;t--;){
    cin>>n;m=1000;
int a[n],c[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<n-1;i++)m=min(m,(a[i+1]-a[i]));
cout<<m<<endl;
}
}
