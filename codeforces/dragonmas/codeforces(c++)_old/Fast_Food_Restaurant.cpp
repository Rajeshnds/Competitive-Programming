#include<bits/stdc++.h>
using namespace std;
int t,s,a[3];
main(){
for(cin>>t;t--;cout<<endl){
    cin>>a[0]>>a[1]>>a[2];s=0;
    sort(a,a+3);
    if(a[0])a[0]--,s++;
    if(a[1])a[1]--,s++;
    if(a[2])a[2]--,s++;
    if(a[0]&&a[2])a[0]--,a[2]--,s++;
    if(a[1]&&a[2])a[1]--,a[2]--,s++;
    if(a[0]&&a[1])a[0]--,a[1]--,s++;
    if(a[0]&&a[1]&&a[2])s++;
cout<<s;
}
}
