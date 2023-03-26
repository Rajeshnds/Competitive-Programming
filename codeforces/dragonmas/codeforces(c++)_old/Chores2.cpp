#include<bits/stdc++.h>
using namespace std;
int n,a,b;
main(){
cin>>n>>a>>b;
vector<int> v(n);
for(int i=0;i<n;i++)cin>>v[i];
sort(v.begin(),v.end());
cout<<v[n-a]-v[n-a-1];
}
