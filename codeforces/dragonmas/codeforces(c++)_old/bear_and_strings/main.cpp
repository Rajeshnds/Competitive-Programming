#include<bits/stdc++.h>
using namespace std;
string s;
void read(){
    cin>>s;
}
void solve(){
    int k=0,j=0;
    for(int i=0;i<int(s.size())-3;i++){
        if(s.substr(i,4)=="bear"){
            k=i+1;
        }
        j+=k;
    }
    cout<<j;
}
int main(){
    string t="a";
    read();
    solve();
}
