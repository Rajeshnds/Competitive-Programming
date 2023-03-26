#include<bits/stdc++.h>
using namespace std;
int n,k,a[203];
int peak_height(){
    cin>>n>>k;
    for(int i=0;i<=2*n;i++)cin>>a[i];
    for(int i=0;i<=2*n;i++){
        if((a[i]-1>a[i-1]&&a[i]-1>a[i+1])&&k)cout<<a[i]-1<<" ",k--;
        else cout<<a[i]<<" ";
    }
}
int main(){
    peak_height();
}
