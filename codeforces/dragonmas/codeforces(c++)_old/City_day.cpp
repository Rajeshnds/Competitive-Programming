#include<bits/stdc++.h>
using namespace std;
int n,x,y,m;
main(){
    cin>>n>>x>>y;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]<a[m])m=i;
        if(i-m==y)break;
    }
    cout<<m+1;
}
