#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s;
for(int i=0;i<s.size();i+=2)
    t=t+s[i];
sort(t.begin(),t.end());
for(int i=1;i<s.size();i+=2)
    t.insert(i,"+");
cout<<t;
}
