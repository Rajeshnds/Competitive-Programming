#include<bits/stdc++.h>
using namespace std;
int n,p;
string s;
void read(){
    cin>>n>>p>>s;
}
void solve(){
    int k=0,l=0;
    for(int i=0;i<n-p;i++){
        if(s[i]!=s[i+p]){
            l=i+p;
            break;
        }
        if(s[i]=='.'&&s[i+p]=='.'){
            k=i+p;
            break;
        }
    }
    if(k){
        s[k]='1';
        s[k-p]='0';
        for(int i=0;i<n;i++)if(s[i]=='.')s[i]='1';
        cout<<s;
    }
    else if(l){
        if(s[l-p]!='.'&&s[l]!='.'){
            for(int i=0;i<n;i++)if(s[i]=='.')s[i]='1';
            cout<<s;
        }
        else{
            if(s[l-p]=='1')s[l]='0';
            else if(s[l-p]=='0')s[l]='1';
            else if(s[l]=='1')s[l-p]='0';
            else if(s[l]=='0')s[l-p]='1';
            for(int i=0;i<n;i++)if(s[i]=='.')s[i]='1';
            cout<<s;
        }
    }
    else cout<<"NO";
}
int main(){
    read();
    solve();
}
