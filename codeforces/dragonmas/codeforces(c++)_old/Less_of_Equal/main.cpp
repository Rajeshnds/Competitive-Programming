#include<bits/stdc++.h>
using namespace std;
int exactly_x(int k,int a[]){
    if(k==0){
        if(a[1]==1)return -1;
        return 1;
    }
    if(a[k]!=a[k+1])return a[k];
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n+2]={0};
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    cout<<exactly_x(k,a);
}
