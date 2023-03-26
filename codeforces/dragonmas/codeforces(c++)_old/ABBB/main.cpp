#include<bits/stdc++.h>
using namespace std;
int t,k,l;
string s;
int bomb(string s){
    k=0;l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')k++;
            else if(k)k--;
            else l++;
        }
        return k+(l&1);
}
int main(){
    for(cin>>t;t--;)cin>>s,cout<<bomb(s)<<"\n";
}
