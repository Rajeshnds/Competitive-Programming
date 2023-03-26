#include<bits/stdc++.h>
using namespace std;
string s;
int k,l,m;
main(){
cin>>s;
for(char c:s){
    if(c>='A'&&c<='Z')k=1;//(c>=65&&c<=90)
    if(c>='a'&&c<='z')l=1;//(c>=97&&c<=122)
    if(c>='0'&&c<='9')m=1;//(c>=48&&c<=57)
}
cout<<(s.size()>=5&&k+l+m==3?"Correct":"Too weak");
}
