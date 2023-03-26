#include<bits/stdc++.h>
using namespace std;
string s,t={'A','E','I','O','U','Y'};
int k,x=1;
main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(t.find(s[i])!=-1)k=max(k,x),x=1;
        else x++;
    }
    cout<<max(k,x);
}
