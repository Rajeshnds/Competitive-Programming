#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void read(){
    cin>>n>>s;
}
void solve(){
  s='0'+s+'0';
  if(s.find("000")==-1&&s.find("11")==-1)cout<<"YES";
  else cout<<"NO";
}
int main(){
    read();
    solve();
}
