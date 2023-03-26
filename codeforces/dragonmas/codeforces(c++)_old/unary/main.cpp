#include<bits/stdc++.h>
using namespace std;
int k;
void read(){
    string s;
    map<char,int>m;
    m['>']=8;
    m['<']=9;
    m['+']=10;
    m['-']=11;
    m['.']=12;
    m[',']=13;
    m['[']=14;
    m[']']=15;
    cin>>s;
    for(int i=0;i<s.size();i++){
        k=(k*16+m[s[i]])%1000003;
    }
}
void solve(){
    cout<<k;
}
int main(){
    read();
    solve();
}
