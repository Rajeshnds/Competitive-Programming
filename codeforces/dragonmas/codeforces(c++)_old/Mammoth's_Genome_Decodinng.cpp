#include<bits/stdc++.h>
using namespace std;
int n,b[120];
string s;
main(){
cin>>n>>s;
if(n%4!=0)cout<<"===";
else{
    for(int i=0;i<n;i++){
    if(s[i]!='?')b[s[i]]++;
    if(b[s[i]]>n/4)return cout<<"===",0;
}
for(int i=0;i<n;i++){
    if(s[i]=='?'){
        if(b['A']<n/4)s[i]='A',b['A']++;
        else if(b['G']<n/4)s[i]='G',b['G']++;
        else if(b['C']<n/4)s[i]='C',b['C']++;
        else s[i]='T';
    }
}
cout<<s;
}
}
