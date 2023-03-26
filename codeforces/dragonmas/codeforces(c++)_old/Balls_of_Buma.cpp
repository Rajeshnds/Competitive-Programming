#include<bits/stdc++.h>
using namespace std;
string s,c;
unordered_map<char,int>m;
main(){
cin>>s;
if(s[0]!=s[s.size()-1])cout<<0;
else{
for(int i=0;i<s.size();i++)m[s[i]]++;
if(m.size()%2==0){cout<<0;return 0;}
}
}
