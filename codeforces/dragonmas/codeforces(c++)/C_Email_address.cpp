#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin>>s;
    s.replace(s.find("at",1),2,"@");
    for(int i=1;i<s.size()-3;i++){
        if(s.substr(i,3)=="dot")s.replace(i,3,".");
    }
    cout<<s;
}