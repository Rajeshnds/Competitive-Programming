#include<bits/stdc++.h>
using namespace std;
int n,m,a;
main(){
cin>>n>>m;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];
sort(v.begin(),v.end());
for(auto i:v)if(i<0&&m>0)a+=i,m--;
cout<<abs(a);
}
