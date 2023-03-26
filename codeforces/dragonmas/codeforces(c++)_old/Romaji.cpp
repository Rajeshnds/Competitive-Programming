#include<bits/stdc++.h>
using namespace std;
string s,t="aeiou";
main(){
cin>>s;
int k=s.size();
for(int i=0;i<k;i++){
    if(t.find(s[i])==-1&&s[i]!='n'){
        if(t.find(s[i+1])==-1){cout<<"NO";return 0;}
    }
}
cout<<"YES";
}
