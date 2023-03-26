#include<bits/stdc++.h>
using namespace std;
int n,a[102],k,m;
int main(){
   cin>>n;
   a[n+1]=1001;
   for(int i=1;i<=n;i++)cin>>a[i];
   for(int i=0;i<=n;i++){
       if(a[i+1]-a[i]==1)k++;
       else k=0;
       m=max(m,k);
   }
   cout<<(m>1?m-1:0);
}