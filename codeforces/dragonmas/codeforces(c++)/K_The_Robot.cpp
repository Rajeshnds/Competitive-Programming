#include<bits/stdc++.h>
using namespace std;
int n;
string s;
pair<int,int>p[5001];
void solve(){
    int k,l;
    for(int i=0;i<s.size();i++){
        k=0;l=0;
        for(int j=0;j<s.size();j++){
            if(k+(s[j]=='R')-(s[j]=='L')==
            p[i].first&&l+(s[j]=='U')-(s[j]=='D')==
            p[i].second)continue;
            k+=(s[j]=='R')-(s[j]=='L');
            l+=(s[j]=='U')-(s[j]=='D');
        }
        if(k==0&&l==0){cout<<p[i].first<<" "<<p[i].second;return;}
    }
    cout<<0<<" "<<0;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++,cout<<endl){
        cin>>s;
        int k=0,l=0;
        for(int j=0;j<s.size();j++){
            k+=(s[j]=='R')-(s[j]=='L');
            l+=(s[j]=='U')-(s[j]=='D');
            p[j]={k,l};
        }
        solve();
    }
}