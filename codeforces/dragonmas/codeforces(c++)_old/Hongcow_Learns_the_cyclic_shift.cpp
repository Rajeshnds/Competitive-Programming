#include<bits/stdc++.h>
using namespace std;
string s,t,c;
int k,l;
main(){
cin>>s;c=s;
while(t!=c){
    t="";
    k=s.size();
    t+=s[k-1];
    s.erase(k-1,1);
    t+=s;
    s=t;
    l++;
}
cout<<l;
}
