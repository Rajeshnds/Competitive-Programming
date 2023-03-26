#include<bits/stdc++.h>
using namespace std;
string s;
int d,t;
int min_moves(string s){
    if(s.size()&1)return -1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')d++;
        else if(s[i]=='L')d--;
        else if(s[i]=='U')t++;
        else t--;
    }
    return (abs(d)+abs(t))/2;
}
int main(){
    cin>>s;cout<<min_moves(s);
}
