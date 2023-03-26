#include<bits/stdc++.h>
using namespace std;
string s,t;
main(){
cin>>s;
for(int i=0;i<5;i++){
    cin>>t;
    if(t[0]==s[0]||t[1]==s[1]){cout<<"YES";return 0;}
}
cout<<"NO";
}
