#include<bits/stdc++.h>
using namespace std;
string s,t,p;
int k;
string equal(){
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            k++;
            if(k&1)p+=t[i];
            else p+=s[i];
        }
        else p+=s[i];
    }
    return k&1?"impossible":p;
}
int main(){
    cout<<equal();
}
