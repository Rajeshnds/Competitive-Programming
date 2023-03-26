#include<bits/stdc++.h>
using namespace std;
string s,t="hello";
int b[101],k;
main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]==t[k])k++;
    if(k==5){cout<<"YES";return 0;}
}
cout<<"NO";
}
