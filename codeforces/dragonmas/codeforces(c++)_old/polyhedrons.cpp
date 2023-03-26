#include<iostream>
using namespace std;
int main(){
int n,side=0;
string s;
cin>>n;
while(n>0){
    cin>>s;
    if(s[0]=='T')side+=4;
    if(s[0]=='C')side+=6;
    if(s[0]=='O')side+=8;
    if(s[0]=='D')side+=12;
    if(s[0]=='I')side+=20;
    n--;
}
cout<<side;
return 0;
}
