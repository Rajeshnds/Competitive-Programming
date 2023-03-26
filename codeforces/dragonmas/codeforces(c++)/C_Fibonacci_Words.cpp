#include<bits/stdc++.h>
using namespace std;
string s;
void solve(){
    if(s.size()<=2){cout<<"YEs";return;}
    for(int i=2;i<s.size();i++){
        if(s[i]-'A'!=(s[i-1]-'A'+s[i-2]-'A')%26){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int main(){
    cin>>s;
    solve();
}