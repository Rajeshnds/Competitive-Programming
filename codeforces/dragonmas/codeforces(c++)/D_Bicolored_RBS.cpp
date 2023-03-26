#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void solve(){
    int k=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')k++;
        cout<<(k&1);
        if(s[i]==')')k--;
    }
}
int main(){
    cin>>n>>s;
    solve();
}