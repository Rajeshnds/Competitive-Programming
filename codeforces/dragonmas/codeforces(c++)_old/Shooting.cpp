#include<bits/stdc++.h>
using namespace std;
int n,a;
main(){
cin>>n;
pair<int,int> p[n];
for(int i=0;i<n;i++)cin>>p[i].first,p[i].second=i+1;
sort(p,p+n);
for(int i=n-1;i>=0;i--)a+=(p[i].first*(n-i-1))+1;
cout<<a<<endl;
for(int i=n-1;i>=0;i--)cout<<p[i].second<<" ";
}
