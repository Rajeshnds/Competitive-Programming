#include<bits/stdc++.h>
using namespace std;
int n,m=INT_MAX;
main(){
    cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i],m=min(m,a[i]);
    for(int i=0;i<n;i++)if(a[i]%m!=0)return cout<<"-1",0;
    cout<<m;
}
