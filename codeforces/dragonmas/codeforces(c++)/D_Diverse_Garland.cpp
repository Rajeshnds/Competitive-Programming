#include<bits/stdc++.h>
using namespace std;
int n,k;
string s,t="RGB";
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            for(auto j:t)if(j-s[i]&&j-s[i+2])s[i+1]=j;
        }
    }
    cout<<k<<endl<<s;
}