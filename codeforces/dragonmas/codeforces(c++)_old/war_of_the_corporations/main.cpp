#include<bits/stdc++.h>
using namespace std;
string s,t;
void read(){
    cin>>s>>t;
}
void solve(){
    int k=0,l=0;
    while(s.find(t,k)!=-1){
        k=s.find(t,k)+t.size();
        l++;
    }
    cout<<l;
}
int main(){
    read();
    solve();
}
