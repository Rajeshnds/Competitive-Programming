#include<bits/stdc++.h>
using namespace std;
int k,m,d;
string s;
void solve(){
    for(int i=0;i<s.size();i++){
        if(s[i]=='+')k++;
        else k--;
        d=min(d,k);
        m=max(m,k);
    }
    cout<<m-d;
}
int main(){
    cin>>s;
    solve();
}