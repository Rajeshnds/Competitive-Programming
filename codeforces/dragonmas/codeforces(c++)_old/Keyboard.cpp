#include<bits/stdc++.h>
using namespace std;
char a,c;
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
main(){
cin>>a;
while(cin>>c)cout<<s[s.find(c)-(a=='R')+(a=='L')];
}
