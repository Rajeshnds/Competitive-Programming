#include<bits/stdc++.h>
using namespace std;
string s,t,u;
main(){
cin>>s>>t>>u;
reverse(u.begin(),u.end());
cout<<(s==u&&t[0]==t[2]?"YES":"NO");
}
