#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int> p[102];
main(){
cin>>n;
for(int i=0;i<n;i++)cin>>p[i].first,p[i].second=i+1;
sort(p,p+n);
for(int i=0;i<n/2;i++)cout<<p[i].second<<" "<<p[n-1-i].second<<endl;
}
