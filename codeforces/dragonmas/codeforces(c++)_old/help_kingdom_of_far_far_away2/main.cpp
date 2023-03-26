#include<bits/stdc++.h>
using namespace std;
string s,t;
int k,l,f;
int main(){
    cin>>s;
    if(s[0]=='-')f=1,s.erase(0,1);
    if(s.find('.')==-1)s+='.';
    s+="000";
    k=s.find('.');
    for(int i=k-1;i>=0;i--){
        l++;
        t=s[i]+t;
        if(l==3&&i>0)t=','+t,l=0;
    }
    for(int i=k;i<=k+2;i++)t+=s[i];
    t='$'+t;
    if(f)t='('+t+')';
    cout<<t;
}
