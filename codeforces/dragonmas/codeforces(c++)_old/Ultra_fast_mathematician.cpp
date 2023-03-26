#include<bits/stdc++.h>
using namespace std;
char s[101],t[101],b[101];
main(){
cin>>s>>t;
for(int i=0;i<strlen(s);i++){
    if(s[i]==t[i])
        b[i]='0';
    else
        b[i]='1';
}
for(int i=0;i<strlen(s);i++)
    cout<<b[i];
return 0;

}
