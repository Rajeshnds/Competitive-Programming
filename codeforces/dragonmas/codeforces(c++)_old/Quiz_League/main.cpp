#include<bits/stdc++.h>
using namespace std;
int n,k;
int unanswered(){
    cin>>n>>k;
    int a[n+1],i;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=k-1;a[i]!=1;i=(i+1)%n);
    return i+1;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cout<<unanswered();
}
