#include<bits/stdc++.h>
using namespace std;
int n,m;
string s,t;
void read(){
    cin>>n>>m>>s>>t;
}
string solve(){
    int f=0;
    if(s.find('*')!=-1&&n-1>m)return "NO";
    else if(s.find('*')==-1&&n!=m)return "NO";
    for(int i=0;i<s.size();i++){
        if(s[i]=='*')f=1;
        if(!f&&s[i]!=t[i])return "NO";
    }
    int j=t.size()-1;f=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='*')f=1;
        if(!f&&s[i]!=t[j--])return "NO";
    }
    return "YES";
}
int main(){
    read();
    cout<<solve();
}
