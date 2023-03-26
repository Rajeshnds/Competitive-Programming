#include<bits/stdc++.h>
using namespace std;
int n,i;
string s,t;
main(){
cin>>n;
while(n--)cin>>s,t+=s+"\n";
    i=t.find("OO");
    if(i>=0)t.replace(i,2,"++"),cout<<"YES"<<endl<<t;
    else cout<<"NO";
return 0;
}
