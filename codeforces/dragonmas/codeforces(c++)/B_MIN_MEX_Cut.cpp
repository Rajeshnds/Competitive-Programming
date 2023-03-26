#include<bits/stdc++.h>
using namespace std;
int t;
string s;
void solve(){
    int k=0;
    if(s.find('0')==-1)cout<<0;
    else if(s.find('1')==-1)cout<<1;
    else{
        for(int i=0;i<s.size();i++){
            if(k&&s[i]=='0'){cout<<2;return;}
            if(s[i]=='0'){
                k=1;
                while(i+1<s.size()&&s[i+1]=='0')i++;
            }
        }
        cout<<1;
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>s;
        solve();
    }
}