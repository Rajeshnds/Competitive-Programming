#include<bits/stdc++.h>
using namespace std;
long long n,i,c;
main(){
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    for(i=0;i<n;i++)cin>>v1[i],v2[i]=v1[i];
    sort(v1.begin(),v1.end());sort(v2.rbegin(),v2.rend());
    for(i=0;i<n;i++)c+=v1[i]*v2[i];
    cout<<c%10007;
}
