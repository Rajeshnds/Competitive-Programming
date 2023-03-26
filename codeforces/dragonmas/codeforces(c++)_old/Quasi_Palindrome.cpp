#include<bits/stdc++.h>
using namespace std;
string s,t;
main(){
cin>>s;
while(s.back()=='0')s.pop_back();
t=s;
reverse(s.begin(),s.end());
cout<<(t==s?"YES":"NO");
}
