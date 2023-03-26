#include<bits/stdc++.h>
using namespace std;
int n,m;
map<string,string>mp;
string a,b;
main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++)cin>>a>>b,mp[a]=a.size()<=b.size()?a:b;
    while(n--)cin>>a,cout<<mp[a]<<" ";
}
