#include<bits/stdc++.h>
using namespace std;
int n,k,a,b[102],i;
main(){
    for(cin>>n;i<n;i++)cin>>a,b[a]++,k+=(b[a]%2==0);
    cout<<k/2;
}
