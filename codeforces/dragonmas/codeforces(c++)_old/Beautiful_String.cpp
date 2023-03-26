#include<bits/stdc++.h>
using namespace std;
int t;
string s;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
            for(char j='a';j<='c';j++)if(s[i-1]!=j&&s[i+1]!=j)s[i]=j;
            }
            else if(s[i]==s[i+1])s="-1";
        }
        cout<<s;
    }
}
