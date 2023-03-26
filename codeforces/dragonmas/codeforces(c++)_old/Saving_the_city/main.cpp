#include<bits/stdc++.h>
using namespace std;
int t,a,b,l,k,m,d,e,g,h;
string s;
int sapper(){
    l=0;m=0;k=0;d=0;e=0;g=0;h=0;
    cin>>a>>b>>s;
    if(s[s.size()-1]=='1')k++;
    for(int i=0;i<s.size()-1;i++)if(s[i]=='1'&&s[i+1]=='0')k++;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            k++;
            if(k>m)m=k,l=i;
        }
        else k=0;
    }
    t=l-m;
    while(t>=0&&s[t]=='0')d++,t--;
    for(int i=0;i<=t;i++)if(s[i]=='1')e++;l++;
    while(l<s.size()&&s[l]=='0')g++,l++;
    for(int i=l;i<s.size();i++)if(s[i]=='1')h++;
    if(h>g)h--;
    if(e>d)e--;
    return min((h+e)*b+a,k*a);
}
int main(){
    for(cin>>t;t--;)sapper();
}
