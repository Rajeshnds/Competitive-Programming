#include<bits/stdc++.h>
using namespace std;
string s;
main(){
cin>>s;
for(int i=(s.size()-1)/2,j=1,t=1;i>=0&&i<s.size();i+=j*t,j++,t=-t)cout<<s[i];
}
