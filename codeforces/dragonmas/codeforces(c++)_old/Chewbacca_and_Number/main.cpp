#include<bits/stdc++.h>
using namespace std;
void chewbacca(string s){
    int j=0;
    if(s[0]=='9')cout<<9,j=1;
    for(int i=j;i<s.size();i++){
        if(s[i]-'0'>4)cout<<57-s[i];
        else cout<<s[i];
    }
}
int main(){
    string s;
    char c='a';
    cin>>s;
    chewbacca(s);
}
