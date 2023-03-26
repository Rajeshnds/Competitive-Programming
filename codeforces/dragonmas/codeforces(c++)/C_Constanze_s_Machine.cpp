#include<bits/stdc++.h>
using namespace std;
long long a,b=1,c,p=1e9+7;
string s;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='m'||s[i]=='w')return cout<<0,0;
        if(s[i]==s[i-1]&&(s[i]=='u'||s[i]=='n')){
            a=(b+c)%p;
        }
        else a=b;
        c=b;
        b=a;
    }
    cout<<b;
}