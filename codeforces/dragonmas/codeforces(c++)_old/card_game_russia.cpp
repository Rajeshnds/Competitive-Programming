#include<bits/stdc++.h>
using namespace std;
char c;
string s,t,u="6789TJQKA";
main(){
    cin>>c>>s>>t;
    cout<<(s[1]==t[1]&&u.find(s[0])>u.find(t[0])||s[1]==c&&t[1]!=c?"YES":"NO");
}
