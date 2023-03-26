#include<bits/stdc++.h>
using namespace std;
int n;
string s;
main(){
cin>>n>>s;
cout<<regex_replace(s,regex("o(go)+"),"***");
}

