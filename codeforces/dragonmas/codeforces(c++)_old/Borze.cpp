#include<bits/stdc++.h>
using namespace std;
char s[202];
main(){
cin>>s;
for(int i=0;i<strlen(s);i++){
    if(s[i]=='.')cout<<0;
    if(s[i]=='-'&&s[i+1]=='.')i++,cout<<1;
    if(s[i]=='-'&&s[i+1]=='-')i++,cout<<2;
}
}
