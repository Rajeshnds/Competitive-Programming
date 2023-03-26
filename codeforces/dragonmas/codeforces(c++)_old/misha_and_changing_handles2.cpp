#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
map<string,string>m;
main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>s>>t;
    if(m[s]!="")m[t]=m[s];
    else m[t]=s;
    m.erase(s);
}
cout<<m.size()<<endl;
for(auto i:m)cout<<i.second<<" "<<i.first<<endl;
}
