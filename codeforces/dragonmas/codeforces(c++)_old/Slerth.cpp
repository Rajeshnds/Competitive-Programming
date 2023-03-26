#include<bits/stdc++.h>
using namespace std;
string s,t="AEIOUYaeyiou";
main(){
getline(cin,s);
int i=s.size()-2;
while(s[i]==' ')i--;
cout<<(t.find(s[i])!=-1?"YES":"NO");
}
