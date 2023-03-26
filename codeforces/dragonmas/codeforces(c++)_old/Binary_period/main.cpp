#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
string period(string s){
    t="";
    if(s.find('1')==-1||s.find('0')==-1)return s;
    for(int i=0;i<s.size();i++)t+="10";
    return t;
}
int main(){
    for(cin>>n;n--;)cin>>s,cout<<period(s)<<endl;
}
