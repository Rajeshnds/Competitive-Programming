#include<bits/stdc++.h>
using namespace std;
void ternary(int n,string s){
    int f=0;
    string t,u;
    for(int i=0;i<n;i++){
        if(f==1)f++;
        if(s[i]=='0'&&f==0)t+='0',u+='0';
        else if(s[i]=='2'&&f==0)t+='1',u+='1';
        else if(s[i]=='1'&&f==0)f++,t+='1',u+='0';
        if(f==2)t+='0',u+=s[i];
    }
    cout<<t<<endl<<u<<endl;
}
int main(){
    int t,n;
    string s;
    for(cin>>t;t--;){
        cin>>n>>s;
        ternary(n,s);
    }
}
