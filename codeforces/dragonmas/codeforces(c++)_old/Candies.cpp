#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,t;
main(){
cin>>n>>m;t=m;
j=n%m;
if(j==0){while(t--)cout<<n/m<<" ";return 0;}
i=(n+m-1)/m;
m-=j;
while(m>0)cout<<i-1<<" ",m--;
while(j>0)cout<<i<<" ",j--;
}
