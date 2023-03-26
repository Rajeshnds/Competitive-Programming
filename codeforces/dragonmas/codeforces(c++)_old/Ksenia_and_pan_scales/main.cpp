#include<bits/stdc++.h>
using namespace std;
string s,t;
string balance(){
    cin>>s>>t;
    for(char c:t)s=s.find('|')>=s.size()/2?s+c:c+s;
    return s.size()%2==1&&s.find('|')==s.size()/2?s:"Impossible";
}
int main(){
    cout<<balance();
}
