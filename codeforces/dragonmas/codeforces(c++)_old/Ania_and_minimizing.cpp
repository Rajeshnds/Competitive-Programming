#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>k>>s;
if(k==0)cout<<s;
if(k==1&&n==1)cout<<0;
if(k>=1&&n>1){
        if(s[0]!='1'){s[0]='1';k--;}
        for(int i=1;i<=k&&i<s.size();i++){
            if(s[i]!='0'){s[i]='0';}
            else k++;
    }
        cout<<s;
}
}
