#include<bits/stdc++.h>
using namespace std;
string s;
void read(){
    cin>>s;
}
void solve(){
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='a')k++;
        if(k>0&&s[i]=='a')break;
        if(k)s[i]=s[i]-1;
    }
    if(k==0)s[s.size()-1]='z';
    cout<<s;
}

int main(){
    read();
    solve();
}
