#include<bits/stdc++.h>
using namespace std;
int n,k,a[200001],d;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int j=1;
    for(int i=n/2+1;i<n;i++){
        d=min(k/j,a[i]-a[n/2]);
        a[n/2]+=d;
        k-=(d*j);
        j++;
        if(k/j<1)break;
    }
    j=n/2+1;
    a[n/2]+=(k/j);
    cout<<a[n/2];
}