#include<bits/stdc++.h>
using namespace std;
string s;
main(){
cin>>s;
regex p("WUB");
cout<<regex_replace(s,p," ");
}
