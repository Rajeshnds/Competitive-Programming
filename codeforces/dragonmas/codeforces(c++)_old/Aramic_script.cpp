#include<bits/stdc++.h>
using namespace std;
int n;
string c;
set<set<char>>s;
main(){
cin>>n;
while(cin>>c){
    set<char>r(c.begin(),c.end());
    s.insert(r);
}
cout<<s.size();
}
