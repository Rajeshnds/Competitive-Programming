#include<bits/stdc++.h>
using namespace std;
int n,i,d,k,a;
main(){
    for(cin>>n;i<n;i++)cin>>a,k+=a;
    for(i=1;i<=5;i++)if((k+i)%(n+1)!=1)d++;
    cout<<d;
}
