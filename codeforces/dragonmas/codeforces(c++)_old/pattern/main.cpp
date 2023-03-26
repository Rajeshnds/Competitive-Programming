#include<bits/stdc++.h>
using namespace std;
int n;
string s;
char t[100001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]!='?'){
                if(t[j]==0)t[j]=s[j];
                else if(t[j]!=s[j])t[j]='?';
            }
        }
    }
    for(int i=0;i<s.size();i++){
        if(t[i]==0)t[i]='a';
        cout<<t[i];
    }
}
