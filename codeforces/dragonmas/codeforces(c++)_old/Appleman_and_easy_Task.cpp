#include<bits/stdc++.h>
using namespace std;
int n;
string s,t,u;
main(){
    for(cin>>n;n--;)cin>>s,t+=s;
    u=t;reverse(t.begin(),t.end());
    cout<<(u==t?"YES":"NO");
}
