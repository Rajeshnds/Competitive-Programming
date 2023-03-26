#include<bits/stdc++.h>
using namespace std;
string s;
int n,l,r,k;
int exam(string s){
    cin>>n;int b[s.size()+1]={0};
    for(int i=1;i<s.size();i++){if(s[i]==s[i-1])k++;b[i]=k;}
    while(n--)cin>>l>>r,cout<<b[r-1]-b[l-1]<<endl;
}
int main(){
    cin>>s;
    exam(s);
}
