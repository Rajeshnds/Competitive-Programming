#include<bits/stdc++.h>
using namespace std;
int n,m,i;
string s,t;
map<string,string>mp;
main(){
for(cin>>n>>m;i<n;i++)cin>>s>>t,mp[t+";"]=s;
while(m--)cin>>s>>t,cout<<s<<t<<" #"<<mp[t]<<endl;
}

