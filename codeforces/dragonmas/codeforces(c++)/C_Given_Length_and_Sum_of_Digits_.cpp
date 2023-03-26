#include<bits/stdc++.h>
using namespace std;
int m,d;
string s,t;
int main(){
    cin>>m>>d;
    int k=d/9;
    int l=d%9;
    if(m<k+(l>0)||(k+l==0&&m>1))return cout<<-1<<" "<<-1,0;
    if(k+l==0)cout<<0<<" "<<0;
    else{
        for(int i=1;i<=k;i++)s+='9';
        if(l)s+=(l+'0');
        for(int i=k+(l>0);i<m;i++)s+='0';
        t=s;
        if(s[m-1]=='0'){
            s[m-1]='1';
            if(l==0)s[k-1]='8';
            else s[k]=(l-1+'0');
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<" "<<t;
}