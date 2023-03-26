#include<bits/stdc++.h>
using namespace std;
int n,k,m=100;
string s,t;
void solve(){
    for(int i=1;i<=44721;i++){
        t=to_string(i*i);
        k=0;
        for(int j=0;j<s.size();j++){
            if(t[k]==s[j])k++;
        }
        if(k==t.size()){
            m=min(m,int(s.size()-t.size()));
        }
    }
    cout<<(m<100?m:-1);
}
int main(){
    cin>>s;
    solve();
}