#include<bits/stdc++.h>
using namespace std;
string s,t;
void solve(){
    for(int i=s.size();i>=1;i--){
        for(int j=0;j<=s.size()-i;j++){
            int l=0;
            for(int k=0;k<s.size();k++){
                if(k<j||k>=j+i){
                    if(s[k]==t[l])l++;
                }
            }
            if(l==t.size()){cout<<i;return;}
        }
    }
    cout<<0;
}
int main(){
    cin>>s>>t;
    solve();
}