#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void solve(){
    int m=0;
    for(char i='0';i<='9';i++){
        for(char j='0';j<='9';j++){
            int l=0;
            char c=i;
            for(int k=0;k<s.size();k++){
                if(s[k]==c){
                    l++;
                    c=c==i?j:i;
                }
            }
            m=max(m,l-(i!=j&&l&1));
        }
    }
    cout<<s.size()-m<<endl;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        solve();
    }
}