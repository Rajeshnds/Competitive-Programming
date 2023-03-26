#include<bits/stdc++.h>
using namespace std;
int n;
string s,t="aeiouy",p="eo";
void solve(){
    for(int i=0;i<s.size();i++){
        if(p.find(s[i])!=-1&&s[i+1]==s[i]&&s[i+2]!=s[i]){
            i++;
            continue;
        }
        if(t.find(s[i])!=-1&&s[i+1]==s[i]){
            while(i+1<s.size()&&s[i+1]==s[i])s.erase(i,1);
            i=max(0,i-2);
        }
    }
    cout<<s;
}
int main(){
    cin>>n>>s;
    solve();
}

