#include<bits/stdc++.h>
using namespace std;
int a[4];
void read(){
    string s;
    for(int i=0;i<3;i++){
        cin>>s;
        if(s[1]=='>')a[s[0]-'A']++;
        else a[s[2]-'A']++;
    }
}
void solve(){
    if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0])cout<<"Impossible";
    else{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==a[j])cout<<char('A'+j);
        }
    }
    }
}
int main(){
    read();
    solve();
}
