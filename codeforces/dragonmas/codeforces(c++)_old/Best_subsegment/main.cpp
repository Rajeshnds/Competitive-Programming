#include<bits/stdc++.h>
using namespace std;
int n,d,k,m;
int max_mean(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    m=*max_element(a,a+n);
    for(int i=0;i<n;i++)if(a[i]==m)k++,d=max(d,k);
    else k=0;
    return d;
}
int main(){
    cin>>n;cout<<max_mean(n);
}
