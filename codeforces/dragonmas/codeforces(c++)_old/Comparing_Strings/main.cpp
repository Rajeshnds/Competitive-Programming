#include<bits/stdc++.h>
using namespace std;
string s,t;
int c[3],j;
string StUDY(){
    cin>>s>>t;
    if(s.size()!=t.size())return "NO";
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i])c[j++]=i;
        if(j>2)return "NO";
    }
    if(s[c[0]]==t[c[1]]&&s[c[1]]==t[c[0]])return "YES";
    else return "NO";
}
int main(){
    cout<<StUDY();
}
