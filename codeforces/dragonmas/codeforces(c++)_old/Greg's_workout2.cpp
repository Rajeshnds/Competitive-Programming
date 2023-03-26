#include<bits/stdc++.h>
using namespace std;
int n,a;
pair<int,string> p[3]={{0,"chest"},{0,"biceps"},{0,"back"}};
main(){
cin>>n;
for(int i=0;i<n;i++)cin>>a,p[i%3].first+=a;
sort(p,p+3);
cout<<p[2].second;
}
