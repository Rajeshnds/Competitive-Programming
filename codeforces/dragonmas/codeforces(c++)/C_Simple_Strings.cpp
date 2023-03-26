#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]=='a'){
                if(s[i+2]=='b'){
                    s[i+1]='c';
                }
                else s[i+1]='b';
            }
            else if(s[i]=='b'){
                if(s[i+2]=='a'){
                    s[i+1]='c';
                }
                else s[i+1]='a';
            }
            else{
                if(s[i+2]=='a'){
                    s[i+1]='b';
                }
                else s[i+1]='a';
            }
        }
    }
    cout<<s;
}