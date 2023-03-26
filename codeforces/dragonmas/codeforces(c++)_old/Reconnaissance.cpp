#include<bits/stdc++.h>
using namespace std;
int n,x,y,m;
main(){
cin>>n;
int a[n];
for(int i=1;i<=n;i++)cin>>a[i];
m=abs(a[1]-a[n]);
x=1;y=n;
for(int i=1;i<=n-1;i++){
    if(abs(a[i]-a[i+1])<m){
        m=abs(a[i]-a[i+1]);
        x=i;y=i+1;
    }
}
cout<<x<<" "<<y;
}
