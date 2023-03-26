#include<bits/stdc++.h>
using namespace std;
int n,m;
main(){
cin>>n>>m;
string s[n],t[n],c[m],d[m];
for(int i=0;i<n;i++)cin>>s[i]>>t[i];
for(int i=0;i<m;i++)cin>>c[i]>>d[i],d[i].erase(d[i].size()-1,1);
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if(d[i]==t[j]){cout<<c[i]<<" "<<d[i]<<";"<<" "<<"#"<<s[j]<<endl;break;}
    }
}
}
