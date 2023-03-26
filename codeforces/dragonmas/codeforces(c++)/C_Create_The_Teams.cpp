#include<bits/stdc++.h>
using namespace std;
int t,n,x,a[100001],j,k;
int main(){
    for(cin>>t;t--;){
         cin>>n>>x;
         j=0;k=0;
         for(int i=0;i<n;i++)cin>>a[i];
         sort(a,a+n);
         for(int i=n-1;i>=0;i--){
             k++;
             if(a[i]*k>=x)j++,k=0;
         }
         cout<<j<<endl;
    }
}