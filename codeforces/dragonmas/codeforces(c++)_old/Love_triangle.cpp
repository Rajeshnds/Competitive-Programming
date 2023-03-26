#include<bits/stdc++.h>
using namespace std;
int n,a[5001],i=1,z;
main(){
for(cin>>n;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++)if(a[a[a[i]]]==i){cout<<"YES";return 0;}cout<<"NO";
}
