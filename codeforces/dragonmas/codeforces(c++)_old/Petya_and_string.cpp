#include<bits/stdc++.h>
using namespace std;
string s,t;
main(){
cin>>s>>t;
for(int i=0;i<s.size();i++){
    if(s[i]<97)s[i]=s[i]+32;
    if(t[i]<97)t[i]=t[i]+32;
    if(s[i]-t[i]>0){cout<<1;return 0;}
    if(s[i]-t[i]<0){cout<<-1;return 0;}
}
cout<<0;
}
