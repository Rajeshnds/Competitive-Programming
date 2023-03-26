#include<bits/stdc++.h>
using namespace std;
string s;
int k;
void read(){
    cin>>s>>k;
}
void solve(){
    int d=0;
   for(int i=0;i<s.size();i++)if(s[i]!='?'&&s[i]!='*')d++;
   for(int i=0;i<s.size();i++){
       if(s[i]=='*'&&d<k)s.insert(i,k-d,s[i-1]),d=k;
       else if(s[i]=='?'||s[i]=='*'){
           s.erase(i,1),i--;
           if(d>k)s.erase(i,1),i--,d--;
       }
   }
   cout<<(k==d?s:"Impossible");
}
int main(){
    read();
    solve();
}
