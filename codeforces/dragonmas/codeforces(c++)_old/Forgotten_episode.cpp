#include<bits/stdc++.h>
using namespace std;
int n,a,m;
main(){
cin>>n;
for(int i=1;i<n;i++)cin>>a,m+=a;
cout<<(n*(n+1))/2-m;
}
