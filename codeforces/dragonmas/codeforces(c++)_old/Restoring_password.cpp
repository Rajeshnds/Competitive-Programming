#include<bits/stdc++.h>
using namespace std;
string s,t;
map<string,int>m;
main(){
cin>>s;
for(int i=0;i<10;i++)cin>>t,m[t]=i;
for(int i=0;i<80;i+=10)cout<<m[s.substr(i,10)];
}
