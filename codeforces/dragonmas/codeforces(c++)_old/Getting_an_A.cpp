#include<bits/stdc++.h>
using namespace std;
double k,s;
int n,i;
main(){
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i],s+=a[i];i=0;
while(s/n<4.5){
    sort(a,a+n);
    s+=-a[i]+5;
    i++;
}
cout<<i;
}
