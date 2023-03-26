#include<bits/stdc++.h>
using namespace std;
int team(int n){
    int b[n+1]={0},m=0,k=0,a;
    for(int i=0;i<n;i++)cin>>a,b[a]++,m=max(m,b[a]);
    for(int i=1;i<=n;i++)if(b[i]>=1)k++;
    return m-1>=k?k:min(m,k-1);
}
int main(){
    int t,n;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        cout<<team(n);
    }
}
