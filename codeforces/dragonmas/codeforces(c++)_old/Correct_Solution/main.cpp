#include<bits/stdc++.h>
using namespace std;
string s,t,u,m;
string if_correct(){
    cin>>s>>m;
    for(int i=0;i<s.size();i++)if(s[i]=='0')t+='0',s.erase(i,1);
    sort(s.begin(),s.end());
    if(s.size()>=1)u=s[0],s.erase(0,1);
    u=u+t+s;
    return u==m?"OK":"WRONG_ANSWER";
}
int main(){
    cout<<if_correct();
}
