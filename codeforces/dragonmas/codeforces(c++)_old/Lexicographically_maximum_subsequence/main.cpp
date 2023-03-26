#include<bits/stdc++.h>
using namespace std;
string s,b;
char c='a';
string lexicographically_subsequence(){
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)if(s[i]>=c)c=s[i],b=c+b;
    return b;
}
int main(){
    cout<<lexicographically_subsequence();
}
