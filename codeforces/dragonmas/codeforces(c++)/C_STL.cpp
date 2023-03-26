#include<bits/stdc++.h>
using namespace std;
int n,k;
string s,t;
void f(){
    if(cin>>s){
        t+=s;
        if(s=="pair")t+='<',f(),t+=',',f(),t+='>';
    }
    else k=1;
}
void solve(){
    f();
    if(k||cin>>s)cout<<"Error occurred";
    else cout<<t;
}
int main(){
    cin>>n;
    solve();
}