#include<bits/stdc++.h>
using namespace std;
int k[90],n;
string s;
void solve(){
    string t="";
    while(s!=t){
        t=s;s="";
        for(auto c:t){
            if(k[c])k[c]--;
            else k['R'+'D'-c]++,s+=c;
        }
    }
    cout<<s[0];
}
int main(){
    cin>>n>>s;
    solve();
}