#include<bits/stdc++.h>
using namespace std;
int n,k,l,m;
string s,c;
main(){
cin>>c>>n;
while(n--){
    cin>>s;
    if(s==c)m=1;
    if(c[0]==s[1])k=1;
    if(c[1]==s[0])l=1;
}
cout<<(l+k==2||m?"YES":"NO");
}
