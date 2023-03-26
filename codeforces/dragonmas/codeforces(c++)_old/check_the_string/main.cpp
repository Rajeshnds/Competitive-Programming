#include<bits/stdc++.h>
using namespace std;
string s;
void read(){
    cin>>s;
}
void solve(){
    int c[3]={0};
    string ans="YES";
    for(int i=0;i<s.size();i++){
        c[s[i]-'a']++;
        if(i&&s[i]<s[i-1])ans="NO";
    }
    if(!c[0]||!c[1]||(c[2]!=c[0]&&c[2]!=c[1]))ans="NO";
    cout<<ans;
}
int main(){
    read();
    solve();
}
