#include<bits/stdc++.h>
using namespace std;
string s,t="aeiou13579";
int k,i;
main(){
for(cin>>s;i<s.size();i++)k+=(t.find(s[i])<10);cout<<k;
}
