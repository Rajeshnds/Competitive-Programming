#include<bits/stdc++.h>
using namespace std;
int n,d,t,k;
main(){
cin>>n>>d;
for(int i=0;i<n;i++)cin>>t,k+=t;
cout<<(d>=k+10*(n-1)?(d-k)/5:-1);
}
