#include<bits/stdc++.h>
using namespace std;
int n,k;
string s[101],t[101];
map<string,int>m;
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i],m[s[i]]++;
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(m[t[i]])k++,m[t[i]]--;
    }
}
void solve(){
   cout<<n-k;
}
int main(){
    read();
    solve();
}
