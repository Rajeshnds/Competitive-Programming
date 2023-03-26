#include<bits/stdc++.h>
using namespace std;
string s;
main(){
cin>>s;
regex r("((1)|(14)|(144))*");
cout<<(regex_match(s,r)?"YES":"NO");
}


