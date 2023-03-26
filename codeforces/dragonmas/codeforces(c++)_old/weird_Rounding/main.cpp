#include<bits/stdc++.h>
using namespace std;
string s,t;
int k,l,i;
int remove_digit(string s,int k){
    for(i=s.size()-1;i>=0&&k;i--)s[i]=='0'?k--:l++;
    return i>=0?l:s.size()-1;
}
int main(){
    cin>>s>>k;cout<<remove_digit(s,k);
}
