#include<bits/stdc++.h>
using namespace std;
string s;
main(){
cin>>s;
int i=s.find('.');
if(s[i-1]!='9'){
    if(s[i+1]>='5')s[i-1]++,cout<<s.substr(0,i);
    else cout<<s.substr(0,i);
}
else cout<<"GOTO Vasilisa.";
}
