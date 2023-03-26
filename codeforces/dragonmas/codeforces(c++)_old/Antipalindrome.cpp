#include<bits/stdc++.h>
using namespace std;
string t,c;
set<char>s;
main(){
cin>>t;c=t;
for(int i=0;i<t.size();i++)s.insert(t[i]);
reverse(t.begin(),t.end());
cout<<(s.size()==1?0:t.size()-(t==c));
}
