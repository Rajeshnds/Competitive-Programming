#include<bits/stdc++.h>
using namespace std;
string s;
int d,f,k,l,r;
int main(){
    cin>>s;
    for(int i=s.size()-1;i>1;i--){
        if(s[i]==']')d=1;
        if(d&&s[i]==':'){l=i;break;}
    }
    for(int i=0;i<l;i++){
        if(s[i]=='[')r=1;
        if(r&&s[i]==':')f=1;
        if(f&&s[i]=='|')k++;
    }
    cout<<(l&&f?4+k:-1);
}
