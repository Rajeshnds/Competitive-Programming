#include<bits/stdc++.h>
using namespace std;
set<char> s;
char c;
main(){
while(c!='}'){
    cin>>c;
if(c>='a'&&c<='z')
    s.insert(c);
}
cout<<s.size();
return 0;
}
