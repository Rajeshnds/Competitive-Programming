#include<bits/stdc++.h>
using namespace std;
char c;
string s(10,'0');
int n;
main(){
cin>>n;
while(n--){
    cin>>c;
    if(c=='L')s[s.find('0')]='1';
    else if(c=='R')s[s.rfind('0')]='1';
    else s[c-48]='0';
}
cout<<s;
}
