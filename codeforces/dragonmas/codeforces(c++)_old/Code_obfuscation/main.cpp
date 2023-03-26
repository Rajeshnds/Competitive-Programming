#include<bits/stdc++.h>
using namespace std;
string s;
int j,b[125];
string obfuscation(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(b[s[i]]==0){
            if(s[i]==97+j)j++,b[s[i]]=1;
            else return "NO";
        }
    }
        return "YES";
}
int main(){
    cout<<obfuscation();
}
