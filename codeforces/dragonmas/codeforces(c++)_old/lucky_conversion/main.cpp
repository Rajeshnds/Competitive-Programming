#include<bits/stdc++.h>
using namespace std;
string s,t;
void read(){
    cin>>s>>t;
}
void solve(){
    int k=0,l=0;
   for(int i=0;i<s.size();i++){
       if(s[i]!=t[i]){
           s[i]=='4'?k++:l++;
       }
   }
   cout<<max(k,l);
}
int main(){
    read();
    solve();
}
