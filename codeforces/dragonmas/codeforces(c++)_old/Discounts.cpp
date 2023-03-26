#include<bits/stdc++.h>
using namespace std;
long long s;
int n,m,q;
main(){
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i],s+=v[i];
sort(v.rbegin(),v.rend());
cin>>m;
while(m--){
    cin>>q;
    cout<<s-v[q-1]<<endl;
}
}
