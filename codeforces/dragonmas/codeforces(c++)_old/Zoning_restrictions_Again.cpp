#include<bits/stdc++.h>
using namespace std;
int n,h,s,m,l,r,x;
main(){
cin>>n>>h>>m;
vector<int> v(n+1,h);
while(m--){cin>>l>>r>>x;for(int i=l;i<=r;i++)v[i]=min(v[i],x);}
for(int i=1;i<=n;i++)s+=(v[i]*v[i]);
cout<<s;
}
