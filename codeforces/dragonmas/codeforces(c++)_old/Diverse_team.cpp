#include<bits/stdc++.h>
using namespace std;
int n,k,i,a;
map<int,int> m;
main(){
for(cin>>n>>k,i=1;i<=n;i++)cin>>a,m[a]=i;
if(m.size()<k)return cout<<"NO",0;
cout<<"YES"<<endl;
i=0;
for(auto t:m)if(i++<k)cout<<t.second<<" ";
}
