#include<bits/stdc++.h>
using namespace std;
int n;
string c,t;
set<pair<string,string>> s;
main(){
    for(cin>>n;n--;)cin>>c>>t,s.insert({c,t});
    cout<<s.size();
}
