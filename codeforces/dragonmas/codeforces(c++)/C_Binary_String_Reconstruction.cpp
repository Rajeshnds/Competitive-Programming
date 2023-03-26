#include<bits/stdc++.h>
using namespace std;
int t,x,n,b,f;
string s;
void solve(){
    f=0;
    string t=string(n,'1');
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(i-x>=0)t[i-x]='0';
            if(i+x<n)t[i+x]='0';
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&(i-x<0||t[i-x]=='0')&&(i+x>=n||t[i+x]=='0'))f=1;
    }
    cout<<(f?"-1":t);
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>s>>x;
        n=s.size();
        solve();
    }
}