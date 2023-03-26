#include<bits/stdc++.h>
using namespace std;
int n,j=1,k,a[8];
main(){
    cin>>n;
    for(int i=1;i<=7;i++)cin>>a[i];
    while(k<n){k+=a[j++];if(j==8&&k<n)j=1;}
    cout<<j-1;
}
