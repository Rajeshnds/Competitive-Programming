#include<bits/stdc++.h>
using namespace std;
int t,n,k,a,u;
void elements(int n){
    k=0;
    for(int i=0;i<n;i++)cin>>a,k+=a;
    u=(k>n/2);k=max(k,n-k);
    if(u&&k%2)k--;
    cout<<k<<endl;
    while(k--)cout<<u<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl)cin>>n,elements(n);
}
