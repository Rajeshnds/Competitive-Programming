#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
    cin>>n>>s;
    if(s==string(n,s[0]))return cout<<s[0],0;
    for(auto c:{'B','G','R'}){
        if(count(s.begin(),s.end(),c)!=n-1)cout<<c;
    }
}