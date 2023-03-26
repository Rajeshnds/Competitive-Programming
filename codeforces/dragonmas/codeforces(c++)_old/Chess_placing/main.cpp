#include<bits/stdc++.h>
using namespace std;
int n,j=1,k=2,s,t;
int same_color(int n){
    int a[n+1];
    for(int i=1;i<=n/2;i++)cin>>a[i];
    sort(a+1,a+n/2+1);
    for(int i=1;i<=n/2;i++)s+=abs(j-a[i]),t+=abs(k-a[i]),k+=2,j+=2;
    return min(s,t);
}
int main(){
    cin>>n;cout<<same_color(n);
}
