#include<bits/stdc++.h>
using namespace std;
string s,t,u;
main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        t+=s[i];
        if(s[i]!='a')u+=s[i];
        if(t.size()+u.size()==s.size())break;
    }
    if(t+u==s)cout<<t;
    else cout<<":(";
}
