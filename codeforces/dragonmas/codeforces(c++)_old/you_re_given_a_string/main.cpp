#include<bits/stdc++.h>
using namespace std;
string s,t;
int main(){
    int m=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        t="";
        for(int j=i;j<s.size();j++){
            t+=s[j];
            if(s.find(t,i+1)!=-1)m=max(m,int(t.size()));
        }
    }
    cout<<m;
}
