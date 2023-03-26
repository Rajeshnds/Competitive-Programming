#include<bits/stdc++.h>
using namespace std;
string u,t;
int q,a[26],h;
void solve(){
    string s="",d="",e;
    for(int i=0;i<h;i++)s+=t[i];
    int j=0;
    e=s;
    while(j<u.size()){
        d+=s;
        for(int i=0;i<s.size();i++){
            if(s[i]==u[j])s.erase(i,1),i--;
        }
        j++;
    }
    if(d==t)cout<<e<<" "<<u;
    else cout<<-1;
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>t;
        u="";
        fill(a,a+26,0);
        for(int i=t.size()-1;i>=0;i--){
            if(a[t[i]-'a']==0)u=t[i]+u;
            a[t[i]-'a']++;
        }
        int f=1;h=0;
        for(int i=0;i<u.size();i++){
            int g=a[u[i]-'a'];
            if(g%(i+1))f=0;
            h+=(g/(i+1));
        }
        if(f==0)cout<<-1;
        else solve();
    }
}
