#include<bits/stdc++.h>
using namespace std;
int t,a,b,c;
string s;
void solve(){
    s="";
    int f=1;
    for(int i=0;i<a;i++){
        if(i==a-1)s+="00";
        else s+='0';
    }
    if(s.size()==0){
        f=0;
        if(b==1)s+="01",b--;
        if(b){
            s+="101";
            b-=2;
            if(b%2)s='0'+s,b--;
            for(int i=0;i<b/2;i++)s+="01";
        }
    }
    if(f){
        if(b)s+='1',b--;
        if(b){
            if(b%2)s='1'+s,b--;
            for(int i=0;i<b/2;i++)s+="01";
        }
    }
    int t=s.size();
    for(int i=0;i<c+(t==0);i++)s+='1';
    cout<<s;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>c;
        solve();
    }
}