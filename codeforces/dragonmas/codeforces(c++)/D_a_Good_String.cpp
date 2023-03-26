#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
int f(string s,char c){
    int n=s.size();
    if(n==1)return s[0]!=c;
    string s1=s.substr(0,n/2),s2=s.substr(n/2,n/2);
    int a=count(s1.begin(),s1.end(),c),b=count(s2.begin(),s2.end(),c);
    return min(n/2-a+f(s2,c+1),n/2-b+f(s1,c+1));
}
void solve(){
    cout<<f(s,'a');
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}