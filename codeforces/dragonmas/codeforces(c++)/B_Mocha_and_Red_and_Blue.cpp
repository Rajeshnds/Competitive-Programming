#include<bits/stdc++.h>
using namespace std;
int t,n,a;
string s;
void solve(){
    if(a==-1){
        for(int i=0;i<n;i++){
            if(i&1)s[i]='R';
            else s[i]='B';
        }
    }
    else{
        int r;
        if(s[a]=='R')r=1;
        else r=-1;
        for(int i=a-1;i>=0;i--){
            if(r==1)s[i]='B',r*=-1;
            else s[i]='R',r*=-1;
        }
        for(int i=a+1;i<n;i++){
            if(s[i]=='?'){
                if(s[i-1]=='R')s[i]='B';
                else s[i]='R';
            }
        }
    }
    cout<<s;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        a=-1;
        for(int i=0;i<n;i++){
            if(s[i]!='?'){a=i;break;}
        }
        solve();
    }
}